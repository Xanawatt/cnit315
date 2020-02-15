#include<stdio.h>
#include<math.h>

/*
 * Lab Title: Hot Tub/Pool
 * Lab Description: Find the size, water capacity, 
 * 	and cost required to fill a pool and hot tub 
 * 	using user specified inputs.
 * Name: Mark Schneider
 * Email: schne112@purdue.edu
 * Lab time: 7:30 F
 */

void computePool() {
	// Initialize variables at a value that is unacceptable	
	float wht = -1; // Width of hot tub
	float dht = -1; // Depth of hot tub
	float l = -1; // Length
	float w = -1; // Width
	float ds = -1; // Depth of shallow end
	float dd = -1; // Depth of deep end
	float ld = -1; // Length of the deep end
	float ls = -1; // Length of the shallow end
	float wi = -1; // Length of the walk in section
	
	// vvv Could be done with a function but whatever
	
	// Entering Depth of shallow end
	printf("Please enter the depth of the shallow end of the pool (0 - 5 feet): ");
	scanf("%f", &ds);
	while (ds < 0.000000 || ds > 5.000000) {
		printf("The depth of the shallow end of the pool must be inclusively between 0.000000 and 5.000000 feet.\n");
		printf("Please enter the depth of the shallow end of the pool (0.000000 - 5.000000 feet): ");
		scanf("%f", &ds);
	}

	// Entering Depth of deep end
	printf("Please enter the depth of the deep end of the pool (6.000000 - 15.000000 feet): ");
	scanf("%f", &dd);
	while (dd < 6.000000 || dd > 15.000000) {
		printf("The depth of the deep end of the pool must be inclusively between 6.000000 and 15.000000 feet.\n");
		printf("Please enter the depth of the deep end of the pool (6.000000 - 16.000000 feet): ");
		scanf("%f", &dd);
	}

	// Entering Width of pool
	printf("Please enter the width of the pool (15.000000 - 30.000000 feet): ");
	scanf("%f", &w);
	while (w < 15.000000 || w > 30.000000) {
		printf("The width of the pool must be inclusively between 15.000000 and 30.000000 feet.\n");
		printf("Please enter the width of the pool (15.000000 - 30.000000 feet): ");
		scanf("%f", &w);
	}

	// Entering Length of pool
	printf("Please enter the length of the pool (30.000000 - 75.000000 feet): ");
	scanf("%f", &l);
	while (l < 35.000000 || l > 70.000000) {
		printf("The length of the pool must be inclusively between 35.000000 and 70.000000 feet.\n");
		printf("Please enter the length of the pool (35.000000 - 70.000000 feet): ");
		scanf("%f", &l);
	}

	// Entering Length walk in
	printf("Please enter the length of the walk in (5.000000 - %.6f feet): ", l / 3.000000);
	scanf("%f", &wi);
	while (wi < 5.000000 || wi > l / 3.000000) {
		printf("The length of the walk in must be inclusively between 5.000000 and %.6f feet.\n", l / 3.000000);
		printf("Please enter the length of the walk in (5.000000 - %.6f feet): ", l / 3.000000);
		scanf("%f", &wi);
	}

	// Entering Length of shallow end
	printf("Please enter the length of the shallow end (10 - %.6f feet): ", l / 2.000000);
	scanf("%f", &ls);
	while (ls < 10.000000 || ls > l / 2.000000) {
		printf("The length of the shallow end must be inclusively between 10.000000 and %.6f feet.\n", l / 2.000000);
		printf("Please enter the length of the shallow end (10.000000 - %.3f feet): ", l / 2.000000);
		scanf("%f", &ls);
	}

	// Entering Length of deep end
	printf("Please enter the length of the deep end (12.000000 - %.6f feet): ", l / 2.000000);
	scanf("%f", &ld);
	while (ld < 12.000000 || ld > l / 2.000000) {
		printf("The length of the shallow end must be inclusively between 12.000000 and %.6f feet.\n", l / 2.000000);
		printf("Please enter the length of the shallow end (12.000000 - %.6f feet): ", l / 2.000000);
		scanf("%f", &ld);
	}

	// Entering Width of hot tub
	printf("Please enter the width of the hot tub (8.000000 - 14.000000 feet): ");
	scanf("%f", &wht);
	while (wht < 8.000000 || wht > 14.000000) {
		printf("The width of the hot tub must be inclusively between 8.000000 and 14.000000 feet.\n");
		printf("Please enter the width of the hot tub (8.000000 - 14.000000 feet): ");
		scanf("%f", &wht);
	}

	// Entering Depth of hot tub
	printf("Please enter the depth of the hot tub (3.000000 - 5.000000 feet): ");
	scanf("%f", &dht);
	while (dht < 3.000000 || dht > 5.000000) {
		printf("The depth of the hot tub must be inclusively between 8.000000 and 5.000000 feet.\n");
		printf("Please enter the depth of the hot tub (3.000000 - 5.000000 feet): ");
		scanf("%f", &dht);
	}

	while ((wi + ls + ld) > l) {
		printf("\nWARNING: The sum of the walk-in length, the shallow end length and the deep end length is larger than the pool length!!");
		printf("\nPlease enter new values for the walk-in, the shallow end, and the deep end.");
		
		// Entering Length walk in
		printf("Please enter the length of the walk in (5.000000 - %.6f feet): ", l / 3.000000);
		scanf("%f", &wi);
		while (wi < 5.000000 || wi > l / 3.000000) {
			printf("The length of the walk in must be inclusively between 5.000000 and %.6f feet.\n", l / 3.000000);
			printf("Please enter the length of the walk in (5.000000 - %.6f feet): ", l / 3.000000);
			scanf("%f", &wi);
		}

		// Entering Length of shallow end
		printf("Please enter the length of the shallow end (10 - %.6f feet): ", l / 2.000000);
		scanf("%f", &ls);
		while (ls < 10.000000 || ls > l / 2.000000) {
			printf("The length of the shallow end must be inclusively between 10.000000 and %.6f feet.\n", l / 2.000000);
			printf("Please enter the length of the shallow end (10.000000 - %.3f feet): ", l / 2.000000);
			scanf("%f", &ls);
		}

		// Entering Length of deep end
		printf("Please enter the length of the deep end (12.000000 - %.6f feet): ", l / 2.000000);
		scanf("%f", &ld);
		while (ld < 12.000000 || ld > l / 2.000000) {
			printf("The length of the shallow end must be inclusively between 12.000000 and %.6f feet.\n", l / 2.000000);
			printf("Please enter the length of the shallow end (12.000000 - %.6f feet): ", l / 2.000000);
			scanf("%f", &ld);
		}
	}
		

	float deepEndVolume = w * (dd - 0.5) * ld;
	float shallowDeepTransitionVolume = 0.5 * (dd + ds - 1.0) * (l - ld - ls - wi) * w;
	float shallowEndVolume = w * (ds - 0.5) * ls;
	float walkinVolume = 0.5 * (ds - 0.5) * wi * w;
	
	float totalPoolVolume = deepEndVolume + shallowDeepTransitionVolume + shallowEndVolume + walkinVolume;
	
	float totalPoolGallons = totalPoolVolume * 7.481;

	printf("\nTotal volume of pool: %.1f", totalPoolVolume);
	printf("\nGallons of water to fill pool: %.1f", totalPoolGallons);

	float hottubVolume = (wht / 2.0) * (wht / 2.0) * M_PI * (dht - 0.5);
	float hottubGallons = (wht / 2.0) * (wht / 2.0) * M_PI * (dht - 0.5) * 7.481;
	float totalCost = (totalPoolGallons + hottubGallons) * 4 * 0.07;
	
	printf("\nTotal volume of hot tub: %.1f", hottubVolume);
	printf("\nGallons of water to fill hot tub: %.1f", hottubGallons);
	printf("\nTotal Gallons for both: %.1f", totalPoolGallons + hottubGallons); 
	printf("\nTotal cost for both: %.2f\n", totalCost);
	
}

int main() {
	int response = 0;
	computePool();
	while (response == 0) {
		printf("Would you like to compute another pool? (1 for yes, 0 for no): ");
		scanf("%d", &response);
		if (response == 1) {
			computePool();
		} else {
			return 0;
		}
	}
	return 0;
}
