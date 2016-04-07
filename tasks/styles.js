'use strict';

var gulp          = require('gulp'),
    $             = require('gulp-load-plugins')(),
    config        = require('../gulp_config.json'),
    argv          = require('yargs').argv,
    slug          = require('slug');

module.exports = function() {

  var iconFontName = slug(config.iconsFontName).toLowerCase();

  function errorAlert(error){
    if (!argv.production) {
      $.notify.onError({title: "SCSS Error", message: "Check your terminal", sound: "Sosumi"})(error);
      $.util.log(error.messageFormatted);
    }
    this.emit("end");
  };

  /**
   * Build styles from SCSS files
   * With error reporting on compiling (so that there's no crash)
   */
  gulp.task('styles', function() {
    if (argv.production) { $.util.log('[styles] Production mode' ); }
    else { $.util.log('[styles] Dev mode'); }

    gulp.src([config.assets + 'sass/' + iconFontName + '.scss', config.assets + 'sass/main.scss'])
      .pipe($.plumber({errorHandler: errorAlert}))
      .pipe(argv.production ? $.util.noop() : $.sourcemaps.init())
      .pipe($.sass({
        outputStyle: 'compressed',
        precision: 5,
        includePaths: ['.']
      }))
      .pipe($.postcss([
        require('autoprefixer')({
          browsers: config.browsers,
          options: {
            map: true
          }
        })
      ]))
      .pipe(argv.production ? $.util.noop() : $.sourcemaps.write())
      .pipe(argv.production ? $.minifyCss() : $.util.noop() )
      .pipe($.concat('main.css'))
      .pipe($.size({title: 'STYLES', showFiles: true}))
      .pipe(gulp.dest(config.build + '/css'));
  });

};
