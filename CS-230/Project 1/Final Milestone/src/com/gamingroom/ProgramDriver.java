package com.gamingroom;

/**
 * Application start-up program
 * 
 * @author coce@snhu.edu
 */
public class ProgramDriver {
	
	/**
	 * The one-and-only main() method
	 * 
	 * @param args command line arguments
	 */
	public static void main(String[] args) {
		
		// retrieve the instance of the game service.
		// if a game service has never been created in memory,
		// a new one will be instatiated. otherwise, the one in
		// memory will be returned.
		GameService service = GameService.getGameService();
		
		System.out.println("\nAbout to test initializing game data...");
		
		// initialize with some game data
        Game game1 = service.addGame("Game #1");
        System.out.println(game1);

        Game game2 = service.addGame("Game #2");
        System.out.println(game2);

        Game game3 = service.addGame("Game #3");
        System.out.println(game3);

        // initialize some teams
        Team team1 = game1.addTeam("Team A");
        System.out.println(team1);

        Team team2 = game1.addTeam("Team B");
        System.out.println(team2);

        // initialize some players
        Player player1 = team1.addPlayer("Player 1");
        System.out.println(player1);

        Player player2 = team1.addPlayer("Player 2");
        System.out.println(player2);

        Player player3 = team2.addPlayer("Player 3");
        System.out.println(player3);
		
		// use another class to prove there is only one instance
		SingletonTester tester = new SingletonTester();
		tester.testSingleton();
	}
}
