package com.gamingroom;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * A singleton service for the game engine
 * 
 * @author coce@snhu.edu
 */
public class GameService {

	/**
	 * A list of the active games
	 */
	private static List<Game> games = new ArrayList<Game>();

	/*
	 * Holds the next game, team, and player identifiers
	 */
	private static long nextGameId = 1;
	private static long nextTeamId = 1;
	private static long nextPlayerId = 1;

	// create a single instance of GameService
	private static GameService gameService;
	
	// create a private constructor, will prevent instantiation of the class
	// for the purpose of a singleton design pattern
	private GameService() {}

	
	/**
	 * We need to create a method that can access the singleton instance.
	 * In order to achieve the paradigm of a singleton, we need to ensure 
	 * that a new instance is only created if a previous one does not exist.
	 * We achieve this by creating a static instance that can be statically accessed,
	 * as well as creating a private constructor. By ensuring the class cannot be
	 * instantiated and only creating a new instance of GameService if it does not exist
	 * within getGameService(), we are ensuring only one instance can exist at any given
	 * time.
	 */
	public static GameService getGameService() {
		
		// if the instance of our game service is null
		if(gameService == null) {
			// instantiate a new GameService
			gameService = new GameService();
		}
		
		return gameService;
	}

	/**
	 * Construct a new game instance
	 * 
	 * @param name the unique name of the game
	 * @return the game instance (new or existing)
	 */
	public Game addGame(String name) {

		// a local game instance
		Game game = null;
		
		// create game iterator in order to look for existing games
		Iterator<Game> gameIterator = games.iterator();
		
		// while the it has a next game, execute
		while(gameIterator.hasNext()) {
			
			// get the next game object in the iterator list
			Game iteratorAt = gameIterator.next();
			
			// if we detect a game that has the name of a game to be added
			if(iteratorAt.getName().equalsIgnoreCase(name)) {
				// set the local instance of game to the found object
				game = iteratorAt;
				break;
			}
			
		}
		
		
		// if not found, make a new game instance and add to list of games
		if (game == null) {
			game = new Game(nextGameId++, name);
			games.add(game);
		}

		// return the new/existing game instance to the caller
		return game;
	}

	/**
	 * Returns the game instance at the specified index.
	 * <p>
	 * Scope is package/local for testing purposes.
	 * </p>
	 * @param index index position in the list to return
	 * @return requested game instance
	 */
	Game getGame(int index) {
		return games.get(index);
	}
	
	/**
	 * Returns the game instance with the specified id.
	 * 
	 * @param id unique identifier of game to search for
	 * @return requested game instance
	 */
	public Game getGame(long id) {

		// a local game instance
		Game game = null;

		// create a new game iterator to attempt to search for a game with the input id
		Iterator<Game> gameIterator = games.iterator();
		
		// loop over the iterator while there is a next element
		while(gameIterator.hasNext()) {
			
			Game iteratorAt = gameIterator.next();
			
			// if a game with the inputed id is found set local variable game to found object
			if(iteratorAt.getId() == id) {
				game = iteratorAt;
				break;
			}
		}
		
		return game;
	}

	/**
	 * Returns the game instance with the specified name.
	 * 
	 * @param name unique name of game to search for
	 * @return requested game instance
	 */
	public Game getGame(String name) {

		// a local game instance
		Game game = null;
		
		// create a new game iterator in order to search for a game with queried name
		Iterator<Game> gameIterator = games.iterator();
		
		// loop over the iterator to search for the query
		while(gameIterator.hasNext()) {
			
			Game iteratorAt = gameIterator.next();
			
			// if a game with the name is found set the local variable to the found object
			if(iteratorAt.getName().equalsIgnoreCase(name)) {
				game = iteratorAt;
				break;
			}
			
		}

		return game;
	}

	/**
	 * Returns the number of games currently active
	 * 
	 * @return the number of games currently active
	 */
	public int getGameCount() {
		return games.size();
	}
	
	/**
	 * Method to return the next team identifier while also incrementing it.
	 * @return the next identifier
	 */
	public static long getNextTeamId() {
		return nextTeamId++;
	}
	
	/**
	 * Method to return the next player identifier while also incrementing it.
	 * @return the next identifier
	 */
	public static long getNextPlayerId() {
		return nextPlayerId++;
	}
}
