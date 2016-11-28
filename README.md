# Expl'or – Content management System


## Quick install
    $ cd drupal
    $ drush site-install minimal --db-url=mysql://explos:explos@localhost/explos --db-su=root --db-su-pw=XXX --site-name=explos
    $ drush en ligue_site
    $ drush cc all
    $ drush fra

    // add extra module for dev
    $ drush en views_ui devel_generate

## After a git pull/merge
    $ drush cc all
    $ drush fra
    $ drush cc all
    $ drush updb

## After updating a feature component
    $ drush fd
    $ drush fu [feature_name]
    $ git commit ...


## Build all assets
    # install all node dependencies
    $ npm install
    # build all assets and watch files
    $ gulp serve
    # build all assets
    $ gulp build
    # build all assets for production
    $ gulp build --production
    # list all gulp tasks
    $ gulp -T

The config for all gulp tasks is in the `gulp_config.json` file.

## Deploy with capistrano

  $ bundle install
  $ bundle exec cap prod deploy
  # list all tasks
  $ bundle exec cap -T

## Documentations

http://drush.ws/
http://drupal.org/theme-guide/6-7
http://api.drupal.org/api/drupal/7
