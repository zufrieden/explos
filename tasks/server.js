'use strict';

var gulp          = require('gulp'),
    $             = require('gulp-load-plugins')(),
    config        = require('../gulp_config.json'),
    browserSync   = require('browser-sync'),
    runSequence   = require('run-sequence'),
    reload        = browserSync.reload;

module.exports = function() {

 /**
  * Serve
  */
  gulp.task('serve', ['default'], function () {
    browserSync({
      server: {
        baseDir: [config.app.basedir],
      },
      open: false
    });
    gulp.watch([config.assets + 'sass/**/*.scss'], function() {
      runSequence('styles', reload);
    });
    gulp.watch([config.assets + 'img/**/*'], function() {
      runSequence('img', reload);
    });
    gulp.watch([config.assets + 'icons/**/*'], function() {
      runSequence('icons', reload);
    });
    gulp.watch([config.assets + 'js/**/*.js'], function() {
      runSequence('scripts', reload);
    });
  });

}
