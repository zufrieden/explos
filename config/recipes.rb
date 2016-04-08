namespace :hotfix do
  task :fix_permissions do
    count = fetch(:keep_releases, 5).to_i
    run("ls -1dt #{releases_path}/* | tail -n +#{count + 1} | xargs chmod -R 777")
  end
end

# Require to have on the server
# - node + npm
# - bower
namespace :styleguide do
  desc "Clone or update styleguide locally"
  task :update do
    run_locally('npm --no-spin --silent install')
    run_locally('gulp build --production')
  end

  desc "Push styleguide build to server"
  task :deploy_build do
    set :dir, "#{current_release}/#{app_path}/sites/all/themes/ligue/"
    upload(fetch(:styleguide_path), dir, :recursive => true, :via => :scp)
  end
end

namespace :staging_env do
  desc "Add HTTP basic AUTH"
  task :protect do
    run "cat #{shared_path}/drupal/.htaccess.protect >> #{current_release}/drupal/.htaccess"
  end
end
