Big Switch Pad by bungwu
=========================

 * Uses an Arduino pro micro
 * My Pad is wired so that the big switch is k00 in the grid  So k04,k08,k12 are empty and the Pad starts at k001

	 #define LAYOUT( \
	  k00, k01, k02, k03, \
	  k04, k05, k06, k07, \
	  k08, k09, k10, k11, \
	  k12, k13, k14, k15 \
	) \


 * Tap dance is enabled for the Big switch
 * Optionally you may add a RGB strip to pin D1 for data and take power from VCC and GND
