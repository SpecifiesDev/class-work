package com.gamingroom;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * A simple class to hold information about a game
 * 
 * @author coce@snhu.edu
 *
 */
public class Game extends Entity {
	
	List<Team> teams = new ArrayList<>();
	
	/**
	 * Constructor with an identifier and name
	 * Pass the input to the super class' constructor in order to initialize variables
	 */
	public Game(long id, String name) {
		super(id, name);
	}
	
	/**
	 * Method to get the list of teams within the game
	 * @return the list of teams
	 */
	public List<Team> getTeams() {
		return teams;
	}
	
	/**
	 * Method to add a new team to the game
	 * 
	 * @param name - the unique name of the team
	 * @return the new team instance (new or existing)
	 */
	
	public Team addTeam(String name) {
		
		// create a storage variable
		Team team = null;
		
		
		// Use an iterator pattern to check for an existing team with the name
		Iterator<Team> teamIterator = teams.iterator();
		
		while(teamIterator.hasNext()) {
			
			// get the team at the next object
			Team teamAt = teamIterator.next();
			
			// if the name if found, our team already exists.
			if(teamAt.getName().equalsIgnoreCase(name)) {
				team = teamAt;
				break;
			}
			
		}
		
		
		// if no team was found, create the new team and iterate the id to give it a new unique id
		if(team == null) {
			team = new Team(GameService.getNextTeamId(), name);
			teams.add(team);
		}
		
		
		
		// return the created team
		return team;
		
	}
	
	

}
