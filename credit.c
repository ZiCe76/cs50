#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Int CardNumber
    long ccnumber = get_long_long("Whats your card number?: ");

    long x = 10, y= 1;
    int i = 0, cc1 = 0, cc2 = 0, sum1 = 0, sum2 = 0;

    while (i < 8) {
		cc1 = (ccnumber / y) % 10;
		y = y * 100;
		cc2 = (ccnumber / x) % 10;
		x = x * 100;

		sum1 += cc1;

		if ((cc2 * 2) % 10 < (cc2 * 2)) 
                {
			sum2 += ((cc2 * 2) / 10) 
			sum2 += (cc2 * 2) % 10;
                }
                else 
                {
			sum2 += cc2 * 2;
		}

		i++;
	}
    // american express = 15 digits; start 34, 37
    // mastercard = 16 digits; start with 51 - 55
    // visa = 13 or 16 digits start with 4
     long cc_count = ccnumber;
	string card_name;

	while (cc_count > 100) {
		cc_count = cc_count / 10;
	}

	if (cc_count == 37) {
		card_name = "AMEX";
	} else if (cc_count == 22 || cc_count == 55 || cc_count == 51) {
		card_name = "MASTERCARD";
	} else if (cc_count == 40 || cc_count == 41 || cc_count == 42 || cc_count == 43) {
		card_name = "VISA";
	} else {
		card_name = "INVALID";
	}

	printf("%s\n", ((sum1+sum2) % 10 == 0) ? card_name : "INVALID");

	return 0;
}