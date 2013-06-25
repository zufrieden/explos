# Explos du dimanche – Content management System


## Quick install
    $ cd drupal
    $ drush site-install minimal --db-url=mysql://explos:explos@localhost/explos --db-su=root --db-su-pw=XXX --site-name=explos
    $ drush en explos_site
    $ drush en explos_lessons
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


## Generate make file
    $ cd drupal
    $ drush generate-makefile ../bata.make


# Deploy with capistrano

gem install capdrupal
# After installation update the script with https://github.com/antistatique/capdrupal

## Documentations

http://drush.ws/
http://drupal.org/theme-guide/6-7
http://api.drupal.org/api/drupal/7


## Image styles

