package com.gamingroom;

/**
 * A base class to hold common attributes and functions between Game, Team, and Player
 */
public class Entity {
	
	// define our private variables
	long id;
	String name;
	
	// Hide the default constructor, will prevent anything calling to this calls from creating empty instances
	private Entity() {}
	
	/** 
	 * Constructor that takes an ID and name to create an entity
	 */
	public Entity(long id, String name) {
		
		this();
		this.id = id;
		this.name = name;
		
	}
	
	/**
	 * Method to return the objects id.
	 * @return the id
	 */
	public long getId() {
		return this.id;
	}
	
	/**
	 * Method to return the objects name.
	 * @return the name
	 */
	public String getName() {
		return this.name;
	}
	
	/**
	 * To string function to get the name of the class, corresponding with its id and name stored.
	 * Getting the simple name will just return the name of the class. Player.java will return Player.
	 * We override the default string implementation in order to create our logic.
	 */
	@Override
	public String toString() {
		return String.format("%s [id=%d, name=%s]", this.getClass().getSimpleName(), id, name);
	}
	

}
