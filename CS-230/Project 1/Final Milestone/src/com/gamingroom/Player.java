package com.gamingroom;

/**
 * A simple class to hold information about a player
 * @author coce@snhu.edu
 *
 */
public class Player extends Entity {
	
	
	/**
	 * because player inherits an entity, there is only a need to pass
	 * init variables up to the superclass.
	 */
	
	public Player(long id, String name) {
		super(id, name);
	}
	
}
