<?php
#
# Copyright (c) 2016 Jeffrey M. Squyres.  All rights reserved.
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

##############################################################################
##############################################################################
# This file must contain the function fill_config().
##############################################################################
##############################################################################

function fill_config()
{
    # git-commit-email-checker.php will ignore any incoming POST that does
    # not come from these network blocks.  As of 9 Aug 2016, according
    # to
    # https://help.github.com/articles/what-ip-addresses-does-github-use-that-i-should-whitelist/:
    $config["allowed_sources"] = array();

    # Fill this in with your Github personal access token.
    $config["auth_token"] = "Fill me in";

    # The name of the CI agent at Github
    $config["ci-context"] = "Git-commit-email-checker";

    # Optional: if a commit contains a boneheaded email address, link
    # to this URL
    $config["ci-link-url"] = "http://ltsi.linuxfoundation.org/developers/signed-process";

    # You almost certainly want "debug" set to 0 (or unset)
    $config["debug"] = 0;

    # These are the allowed repos that we reply to
    $config["github3"]["jsquyres/signed-off-by-github-webhook"] = 1;

    # GitHub API URL.  Can be configured for internal / GitHub
    # Enterprise instances.
    #
    # GitHub.com: https://api.github3.cisco.com
    # GHE: http[s]://YOUR_GHE_NAME/api
    #
    $config["api_url_base"] = "https://github3.cisco.com/api";

    # Return the $config variable
    return $config;
}
