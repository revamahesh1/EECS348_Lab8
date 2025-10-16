#include <stdio.h>
/* Task 1 of Lab 8 */
void find_combos(int score);

int main() {
    int score;
    printf("Enter the NFL score (Enter 1 to stop): ");
    scanf("%d", &score);

    while (score != 1) {
        find_combos(score);
        printf("Enter the NFL score (Enter 1 to stop): ");
        scanf("%d", &score); 
    }

    return 0;
}

void find_combos(int score) {
    int td2, td1, td, fg, safety;

    printf("Possible combinations of scoring plays for %d points:\n", score);
    int found = 0;

    for (td2 = 0; td2 <= score / 8; td2++) {
        for (td1 = 0; td1 <= score / 7; td1++) {
            for (td = 0; td <= score / 6; td++) {
                for (fg = 0; fg <= score / 3; fg++) {
                    for (safety = 0; safety <= score / 2; safety++) {
                        int total = td2 * 8 + td1 * 7 + td * 6 + fg * 3 + safety * 2;
                        if (total == score) {
                            printf("%d TD+2pt, %d TD+1pt, %d TD, %d FG, %d Safety\n",
                                   td2, td1, td, fg, safety);
                            found = 1;
                        }
                    }
                }
            }
        }
    }

    if (!found) {
        printf("No combinations possible for %d points.\n", score);
    }
}

	
		
