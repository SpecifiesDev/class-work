package com.gamingroom;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * A simple class to hold information about a team
 * <p>
 * Notice the overloaded constructor that requires
 * an id and name to be passed when creating.
 * Also note that no mutators (setters) defined so
 * these values cannot be changed once a team is
 * created.
 * </p>
 * @author coce@snhu.edu
 *
 */
public class Team extends Entity {
    List<Player> players = new ArrayList<>();

    /*
     * Constructor with an identifier and name
     * Use super to pass the variables up to the superclass of Entity.
     */
    public Team(long id, String name) {
        super(id, name);
    }

    /**
     * Method to return a list of all players on the team.
     * @return the list of players
     */
    public List<Player> getPlayers() {
        return players;
    }

    /**
     * Method to add a new player to the team.
     * 
     * @param name - the unique name of the player
     * @return the player instance (new or existing)
     */
    public Player addPlayer(String name) {
    	// create a holding variable
        Player player = null;

        // Use an iterator pattern to check if the player exists
        Iterator<Player> playerIterator = players.iterator();
        
        while (playerIterator.hasNext()) {
        	
            Player playerAt = playerIterator.next();
            
            // if the player if found, break the loop and set player to the found object
            if (playerAt.getName().equalsIgnoreCase(name)) {
                player = playerAt;
                break;
            }
            
        }
        
        // if no player is found, create a new player with the next id in the list so the object
        // has a UUID.
        if (player == null) {
            player = new Player(GameService.getNextPlayerId(), name);
            players.add(player);
        }

        return player;
    }
}
