#include<stdio.h>
#include<math.h>

#define SIZE 6

/*
 * Lab Title: Hot Tub/Pool
 * Lab Description: Find the size, water capacity, 
 * 	and cost required to fill a pool and hot tub 
 * 	using user specified inputs.
 * Name: Mark Schneider
 * Email: schne112@purdue.edu
 * Lab time: 7:30 F
 */
 char maze[6][6] = {
	 {'S','#','#','#','#','#'},
	 {'.','.','.','.','.','.'},
	 {'#','.','#','#','#','#'},
	 {'#','.','#','#','#','#'},
	 {'.','.','.','#','.','G'},
	 {'#','#','.','.','.','#'}
 };
 
	 
	 
 
 
 int mazeGo(int x, int y) {
	
	// if position is 'G'
	if (maze[x][y] == 'G') {
		return 0;
	} 
	 
	if (x >= 0 && y >= 0 && x < SIZE && y < SIZE && maze[x][y] != '+' && maze[x][y] != '#') {
		maze[x][y] = '+';
		
		// North
		if (mazeGo(x-1, y)) {
			return 1;
		}
		
		// South
		if (mazeGo(x+1, y)) {
			return 1;
		}
		
		// East
		if (mazeGo(x, y-1)) {
			return 1;
		}
		
		if (mazeGo(x, y+1)) {
			return 1;
		}
		return 0;
	}
	return 0;
}
 
 int main() {
	printf("%d\t", mazeGo(0,0));
 }
 
