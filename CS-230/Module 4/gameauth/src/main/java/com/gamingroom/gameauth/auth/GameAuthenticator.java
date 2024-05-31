package com.gamingroom.gameauth.auth;


import io.dropwizard.auth.AuthenticationException;
import io.dropwizard.auth.Authenticator;
import io.dropwizard.auth.basic.BasicCredentials;
 
import java.util.Map;
import java.util.Optional;
import java.util.Set;
 
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
 
public class GameAuthenticator implements Authenticator<BasicCredentials, GameUser> 
{
		
	private static final Map<String, Set<String>> VALID_USERS = ImmutableMap.of(
        "guest", ImmutableSet.of(),
        "user", ImmutableSet.of("USER"),
        "admin", ImmutableSet.of("ADMIN", "USER")
    );
 
    @Override
    public Optional<GameUser> authenticate(BasicCredentials credentials) throws AuthenticationException 
    {
        if (VALID_USERS.containsKey(credentials.getUsername()) && "password".equals(credentials.getPassword())) 
        {
        	
        	// Retrieve all roles that are associated wtih the inputted username
        	Set<String> roles = VALID_USERS.get(credentials.getUsername());
        	
        	// Create a new game user to validate credentials.
        	// use the passed username and the retrieved roles from our static map
        	GameUser user = new GameUser(credentials.getUsername(), roles);
        	
        	// wrap the object in an Optional. If validation is successful, this will return a validated user
        	// otherwise, it will return an Optional.empty(); indicating that this was not successful
        	return Optional.of(user);

        }
        return Optional.empty();
    }
}
