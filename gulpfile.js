'use strict';
/**
 * Import plugins
 */
var gulp          = require('gulp'),
    $             = require('gulp-load-plugins')(),
    config        = require('./gulp_config.json'),
    argv          = require('yargs').argv,
    inquirer      = require('inquirer'),
    runSequence   = require('run-sequence');


require(config.tasks + 'vendors')();            // $ gulp vendors
require(config.tasks + 'images')();             // $ gulp img
require(config.tasks + 'styles')();             // $ gulp styles
require(config.tasks + 'scripts')();            // $ gulp scripts
require(config.tasks + 'icons')();              // $ gulp icons
require(config.tasks + 'clean')();              // $ gulp clean

if (!argv.production && argv._ != 'init') {
  require(config.tasks + 'server')();             // $ gulp serve
  require(config.tasks + 'gh-pages')();           // $ gulp deploy
}


/**
 * Init project
 */
gulp.task('init', function(done) {
 inquirer.prompt([{
   type: 'confirm',
   message: 'This will copy the Bootstrap-variables file to your assets folder and overwrite it if it doesn\'t exist yet. Do you really want to continue?',
   default: false,
   name: 'start'
 }], function(answers) {
   if(answers.start) {
     gulp.start('init-variables');
   }
   done();
 });
});

gulp.task('init-variables', function() {
 $.util.log('Copying the Bootstrap-variables file to the assets folder.');
 return gulp.src('node_modules/bootstrap-sass/assets/stylesheets/bootstrap/_variables.scss')
   .pipe($.rename('bootstrap-variables.scss'))
   .pipe(gulp.dest(config.assets + 'sass/'));
});

/**
 * Task to build assets on production server
 */
gulp.task('build',['clean'], function() {
  return gulp.start('vendors', 'styles', 'img', 'scripts', 'icons');
});


/**
 * Default task
 */
gulp.task('default', ['clean'], function(done){
  runSequence(['css-vendors', 'js-vendors', 'fonts-vendors', 'polyfills-vendors', 'img', 'icons', 'styles', 'scripts'], done);
});
