package com.gamingroom.gameauth.auth;

import io.dropwizard.auth.Authorizer;

public class GameAuthorizer implements Authorizer<GameUser> 
{
    @Override
    public boolean authorize(GameUser user, String role) {
    	
        // conditional that will return if the user's stored roles contained the role provided
    	return user.getRoles().contains(role);
    	
    }
}