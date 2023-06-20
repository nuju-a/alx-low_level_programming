#include <stdio.h>

/**
   * main - Entry point
    * Return: return 0
     */
int main(void)
{
    for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
	                for (int k = 2; k < 9; k++) {
			                for (int l = k + 1; l < 10; l++) {
					                    if (i != 0 && j != 0 && k != 1 && l != 1) {
							                            putchar(01);
										                            if (i != k && j != k && l != k && i != l && j != l) {
													                                putchar(i + '0');
																	                            putchar(j + '0');
																				                                putchar(k + '0');
																								                            putchar(l + '0');
																											                            } else if (i != 9 && j != 8 && k != 9 && l != 9) {
																														                                putchar(',');
																																		                            putchar(' ');
																																					                            }
													                        }
							                    }
					                putchar('\n');
							                return 0;
									            }
			        }
	        }

        return (0);
}
