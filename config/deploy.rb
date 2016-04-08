set :application,     "explos"

# load custom recipes
load 'config/recipes.rb'

# Relative path to thedrupal path
set :app_path,        "drupal"
set :shared_children, ['drupal/sites/default/files']
set :shared_files,    ['drupal/sites/default/settings.php']
set :stages,          %w(dev prod)

set :scm,            "git"
set :repository,     "git@github.com:zufrieden/explos.git"

set :domain,         "ligue.alwaysdata.net"

set :user,           "ligue"
set :group,          "ligue"
set :runner_group,   "ligue"
set :use_sudo,       false
default_run_options[:pty] = true
ssh_options[:forward_agent] = true

set :download_drush, true

role :app,           domain
role :db,            domain

set  :keep_releases,   3


set :styleguide_path, 'drupal/sites/all/themes/ligue/build/'
after "deploy:update_code", "styleguide:update"
after "deploy:update_code", "styleguide:deploy_build"

after "deploy:update", "deploy:cleanup"

# Be more verbose by uncommenting the following line
#logger.level = Logger::MAX_LEVEL
