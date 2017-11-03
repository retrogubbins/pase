/*** Z80Em: Portable Z80 emulator *******************************************/
/***                                                                      ***/
/***                                Z80DAA.h                              ***/
/***                                                                      ***/
/*** This file contains the DAA emulation lookup table. It is included    ***/
/*** from Z80.c                                                           ***/
/***                                                                      ***/
/*** Copyright (C) Marcel de Kogel 1996,1997                              ***/
/***     You are not allowed to distribute this software commercially     ***/
/***     Please, notify me, if you make any changes to this file          ***/
/****************************************************************************/

static int16_t DAATable[2048]=
{
68,
256,
512,
772,
1024,
1284,
1540,
1792,
2056,
2316,
4112,
4372,
4628,
4880,
5140,
5392,
4096,
4356,
4612,
4864,
5124,
5376,
5632,
5892,
6156,
6408,
8240,
8500,
8756,
9008,
9268,
9520,
8224,
8484,
8740,
8992,
9252,
9504,
9760,
10020,
10284,
10536,
12340,
12592,
12848,
13108,
13360,
13620,
12324,
12576,
12832,
13092,
13344,
13604,
13860,
14112,
14376,
14636,
16400,
16660,
16916,
17168,
17428,
17680,
16384,
16644,
16900,
17152,
17412,
17664,
17920,
18180,
18444,
18696,
20500,
20752,
21008,
21268,
21520,
21780,
20484,
20736,
20992,
21252,
21504,
21764,
22020,
22272,
22536,
22796,
24628,
24880,
25136,
25396,
25648,
25908,
24612,
24864,
25120,
25380,
25632,
25892,
26148,
26400,
26664,
26924,
28720,
28980,
29236,
29488,
29748,
30000,
28704,
28964,
29220,
29472,
29732,
29984,
30240,
30500,
30764,
31016,
-32624,
-32364,
-32108,
-31856,
-31596,
-31344,
-32640,
-32380,
-32124,
-31872,
-31612,
-31360,
-31104,
-30844,
-30580,
-30328,
-28524,
-28272,
-28016,
-27756,
-27504,
-27244,
-28540,
-28288,
-28032,
-27772,
-27520,
-27260,
-27004,
-26752,
-26488,
-26228,
85,
273,
529,
789,
1041,
1301,
69,
257,
513,
773,
1025,
1285,
1541,
1793,
2057,
2317,
4113,
4373,
4629,
4881,
5141,
5393,
4097,
4357,
4613,
4865,
5125,
5377,
5633,
5893,
6157,
6409,
8241,
8501,
8757,
9009,
9269,
9521,
8225,
8485,
8741,
8993,
9253,
9505,
9761,
10021,
10285,
10537,
12341,
12593,
12849,
13109,
13361,
13621,
12325,
12577,
12833,
13093,
13345,
13605,
13861,
14113,
14377,
14637,
16401,
16661,
16917,
17169,
17429,
17681,
16385,
16645,
16901,
17153,
17413,
17665,
17921,
18181,
18445,
18697,
20501,
20753,
21009,
21269,
21521,
21781,
20485,
20737,
20993,
21253,
21505,
21765,
22021,
22273,
22537,
22797,
24629,
24881,
25137,
25397,
25649,
25909,
24613,
24865,
25121,
25381,
25633,
25893,
26149,
26401,
26665,
26925,
28721,
28981,
29237,
29489,
29749,
30001,
28705,
28965,
29221,
29473,
29733,
29985,
30241,
30501,
30765,
31017,
-32623,
-32363,
-32107,
-31855,
-31595,
-31343,
-32639,
-32379,
-32123,
-31871,
-31611,
-31359,
-31103,
-30843,
-30579,
-30327,
-28523,
-28271,
-28015,
-27755,
-27503,
-27243,
-28539,
-28287,
-28031,
-27771,
-27519,
-27259,
-27003,
-26751,
-26487,
-26227,
-24395,
-24143,
-23887,
-23627,
-23375,
-23115,
-24411,
-24159,
-23903,
-23643,
-23391,
-23131,
-22875,
-22623,
-22359,
-22099,
-20303,
-20043,
-19787,
-19535,
-19275,
-19023,
-20319,
-20059,
-19803,
-19551,
-19291,
-19039,
-18783,
-18523,
-18259,
-18007,
-16235,
-15983,
-15727,
-15467,
-15215,
-14955,
-16251,
-15999,
-15743,
-15483,
-15231,
-14971,
-14715,
-14463,
-14199,
-13939,
-12143,
-11883,
-11627,
-11375,
-11115,
-10863,
-12159,
-11899,
-11643,
-11391,
-11131,
-10879,
-10623,
-10363,
-10099,
-9847,
-8015,
-7755,
-7499,
-7247,
-6987,
-6735,
-8031,
-7771,
-7515,
-7263,
-7003,
-6751,
-6495,
-6235,
-5971,
-5719,
-3915,
-3663,
-3407,
-3147,
-2895,
-2635,
-3931,
-3679,
-3423,
-3163,
-2911,
-2651,
-2395,
-2143,
-1879,
-1619,
85,
273,
529,
789,
1041,
1301,
69,
257,
513,
773,
1025,
1285,
1541,
1793,
2057,
2317,
4113,
4373,
4629,
4881,
5141,
5393,
4097,
4357,
4613,
4865,
5125,
5377,
5633,
5893,
6157,
6409,
8241,
8501,
8757,
9009,
9269,
9521,
8225,
8485,
8741,
8993,
9253,
9505,
9761,
10021,
10285,
10537,
12341,
12593,
12849,
13109,
13361,
13621,
12325,
12577,
12833,
13093,
13345,
13605,
13861,
14113,
14377,
14637,
16401,
16661,
16917,
17169,
17429,
17681,
16385,
16645,
16901,
17153,
17413,
17665,
17921,
18181,
18445,
18697,
20501,
20753,
21009,
21269,
21521,
21781,
20485,
20737,
20993,
21253,
21505,
21765,
22021,
22273,
22537,
22797,
24629,
24881,
25137,
25397,
25649,
25909,
1540,
1792,
2056,
2316,
2572,
2824,
3084,
3336,
3592,
3852,
4112,
4372,
4628,
4880,
5140,
5392,
5632,
5892,
6156,
6408,
6664,
6924,
7176,
7436,
7692,
7944,
8240,
8500,
8756,
9008,
9268,
9520,
9760,
10020,
10284,
10536,
10792,
11052,
11304,
11564,
11820,
12072,
12340,
12592,
12848,
13108,
13360,
13620,
13860,
14112,
14376,
14636,
14892,
15144,
15404,
15656,
15912,
16172,
16400,
16660,
16916,
17168,
17428,
17680,
17920,
18180,
18444,
18696,
18952,
19212,
19464,
19724,
19980,
20232,
20500,
20752,
21008,
21268,
21520,
21780,
22020,
22272,
22536,
22796,
23052,
23304,
23564,
23816,
24072,
24332,
24628,
24880,
25136,
25396,
25648,
25908,
26148,
26400,
26664,
26924,
27180,
27432,
27692,
27944,
28200,
28460,
28720,
28980,
29236,
29488,
29748,
30000,
30240,
30500,
30764,
31016,
31272,
31532,
31784,
32044,
32300,
32552,
-32624,
-32364,
-32108,
-31856,
-31596,
-31344,
-31104,
-30844,
-30580,
-30328,
-30072,
-29812,
-29560,
-29300,
-29044,
-28792,
-28524,
-28272,
-28016,
-27756,
-27504,
-27244,
-27004,
-26752,
-26488,
-26228,
-25972,
-25720,
-25460,
-25208,
-24952,
-24692,
85,
273,
529,
789,
1041,
1301,
1541,
1793,
2057,
2317,
2573,
2825,
3085,
3337,
3593,
3853,
4113,
4373,
4629,
4881,
5141,
5393,
5633,
5893,
6157,
6409,
6665,
6925,
7177,
7437,
7693,
7945,
8241,
8501,
8757,
9009,
9269,
9521,
9761,
10021,
10285,
10537,
10793,
11053,
11305,
11565,
11821,
12073,
12341,
12593,
12849,
13109,
13361,
13621,
13861,
14113,
14377,
14637,
14893,
15145,
15405,
15657,
15913,
16173,
16401,
16661,
16917,
17169,
17429,
17681,
17921,
18181,
18445,
18697,
18953,
19213,
19465,
19725,
19981,
20233,
20501,
20753,
21009,
21269,
21521,
21781,
22021,
22273,
22537,
22797,
23053,
23305,
23565,
23817,
24073,
24333,
24629,
24881,
25137,
25397,
25649,
25909,
26149,
26401,
26665,
26925,
27181,
27433,
27693,
27945,
28201,
28461,
28721,
28981,
29237,
29489,
29749,
30001,
30241,
30501,
30765,
31017,
31273,
31533,
31785,
32045,
32301,
32553,
-32623,
-32363,
-32107,
-31855,
-31595,
-31343,
-31103,
-30843,
-30579,
-30327,
-30071,
-29811,
-29559,
-29299,
-29043,
-28791,
-28523,
-28271,
-28015,
-27755,
-27503,
-27243,
-27003,
-26751,
-26487,
-26227,
-25971,
-25719,
-25459,
-25207,
-24951,
-24691,
-24395,
-24143,
-23887,
-23627,
-23375,
-23115,
-22875,
-22623,
-22359,
-22099,
-21843,
-21591,
-21331,
-21079,
-20823,
-20563,
-20303,
-20043,
-19787,
-19535,
-19275,
-19023,
-18783,
-18523,
-18259,
-18007,
-17751,
-17491,
-17239,
-16979,
-16723,
-16471,
-16235,
-15983,
-15727,
-15467,
-15215,
-14955,
-14715,
-14463,
-14199,
-13939,
-13683,
-13431,
-13171,
-12919,
-12663,
-12403,
-12143,
-11883,
-11627,
-11375,
-11115,
-10863,
-10623,
-10363,
-10099,
-9847,
-9591,
-9331,
-9079,
-8819,
-8563,
-8311,
-8015,
-7755,
-7499,
-7247,
-6987,
-6735,
-6495,
-6235,
-5971,
-5719,
-5463,
-5203,
-4951,
-4691,
-4435,
-4183,
-3915,
-3663,
-3407,
-3147,
-2895,
-2635,
-2395,
-2143,
-1879,
-1619,
-1363,
-1111,
-851,
-599,
-343,
-83,
85,
273,
529,
789,
1041,
1301,
1541,
1793,
2057,
2317,
2573,
2825,
3085,
3337,
3593,
3853,
4113,
4373,
4629,
4881,
5141,
5393,
5633,
5893,
6157,
6409,
6665,
6925,
7177,
7437,
7693,
7945,
8241,
8501,
8757,
9009,
9269,
9521,
9761,
10021,
10285,
10537,
10793,
11053,
11305,
11565,
11821,
12073,
12341,
12593,
12849,
13109,
13361,
13621,
13861,
14113,
14377,
14637,
14893,
15145,
15405,
15657,
15913,
16173,
16401,
16661,
16917,
17169,
17429,
17681,
17921,
18181,
18445,
18697,
18953,
19213,
19465,
19725,
19981,
20233,
20501,
20753,
21009,
21269,
21521,
21781,
22021,
22273,
22537,
22797,
23053,
23305,
23565,
23817,
24073,
24333,
24629,
24881,
25137,
25397,
25649,
25909,
70,
258,
514,
774,
1026,
1286,
1542,
1794,
2058,
2318,
1026,
1286,
1542,
1794,
2058,
2318,
4098,
4358,
4614,
4866,
5126,
5378,
5634,
5894,
6158,
6410,
5126,
5378,
5634,
5894,
6158,
6410,
8226,
8486,
8742,
8994,
9254,
9506,
9762,
10022,
10286,
10538,
9254,
9506,
9762,
10022,
10286,
10538,
12326,
12578,
12834,
13094,
13346,
13606,
13862,
14114,
14378,
14638,
13346,
13606,
13862,
14114,
14378,
14638,
16386,
16646,
16902,
17154,
17414,
17666,
17922,
18182,
18446,
18698,
17414,
17666,
17922,
18182,
18446,
18698,
20486,
20738,
20994,
21254,
21506,
21766,
22022,
22274,
22538,
22798,
21506,
21766,
22022,
22274,
22538,
22798,
24614,
24866,
25122,
25382,
25634,
25894,
26150,
26402,
26666,
26926,
25634,
25894,
26150,
26402,
26666,
26926,
28706,
28966,
29222,
29474,
29734,
29986,
30242,
30502,
30766,
31018,
29734,
29986,
30242,
30502,
30766,
31018,
-32638,
-32378,
-32122,
-31870,
-31610,
-31358,
-31102,
-30842,
-30578,
-30326,
-31610,
-31358,
-31102,
-30842,
-30578,
-30326,
-28538,
-28286,
-28030,
-27770,
-27518,
-27258,
-27002,
-26750,
-26486,
-26226,
13347,
13607,
13863,
14115,
14379,
14639,
16387,
16647,
16903,
17155,
17415,
17667,
17923,
18183,
18447,
18699,
17415,
17667,
17923,
18183,
18447,
18699,
20487,
20739,
20995,
21255,
21507,
21767,
22023,
22275,
22539,
22799,
21507,
21767,
22023,
22275,
22539,
22799,
24615,
24867,
25123,
25383,
25635,
25895,
26151,
26403,
26667,
26927,
25635,
25895,
26151,
26403,
26667,
26927,
28707,
28967,
29223,
29475,
29735,
29987,
30243,
30503,
30767,
31019,
29735,
29987,
30243,
30503,
30767,
31019,
-32637,
-32377,
-32121,
-31869,
-31609,
-31357,
-31101,
-30841,
-30577,
-30325,
-31609,
-31357,
-31101,
-30841,
-30577,
-30325,
-28537,
-28285,
-28029,
-27769,
-27517,
-27257,
-27001,
-26749,
-26485,
-26225,
-27517,
-27257,
-27001,
-26749,
-26485,
-26225,
-24409,
-24157,
-23901,
-23641,
-23389,
-23129,
-22873,
-22621,
-22357,
-22097,
-23389,
-23129,
-22873,
-22621,
-22357,
-22097,
-20317,
-20057,
-19801,
-19549,
-19289,
-19037,
-18781,
-18521,
-18257,
-18005,
-19289,
-19037,
-18781,
-18521,
-18257,
-18005,
-16249,
-15997,
-15741,
-15481,
-15229,
-14969,
-14713,
-14461,
-14197,
-13937,
-15229,
-14969,
-14713,
-14461,
-14197,
-13937,
-12157,
-11897,
-11641,
-11389,
-11129,
-10877,
-10621,
-10361,
-10097,
-9845,
-11129,
-10877,
-10621,
-10361,
-10097,
-9845,
-8029,
-7769,
-7513,
-7261,
-7001,
-6749,
-6493,
-6233,
-5969,
-5717,
-7001,
-6749,
-6493,
-6233,
-5969,
-5717,
-3929,
-3677,
-3421,
-3161,
-2909,
-2649,
-2393,
-2141,
-1877,
-1617,
-2909,
-2649,
-2393,
-2141,
-1877,
-1617,
71,
259,
515,
775,
1027,
1287,
1543,
1795,
2059,
2319,
1027,
1287,
1543,
1795,
2059,
2319,
4099,
4359,
4615,
4867,
5127,
5379,
5635,
5895,
6159,
6411,
5127,
5379,
5635,
5895,
6159,
6411,
8227,
8487,
8743,
8995,
9255,
9507,
9763,
10023,
10287,
10539,
9255,
9507,
9763,
10023,
10287,
10539,
12327,
12579,
12835,
13095,
13347,
13607,
13863,
14115,
14379,
14639,
13347,
13607,
13863,
14115,
14379,
14639,
16387,
16647,
16903,
17155,
17415,
17667,
17923,
18183,
18447,
18699,
17415,
17667,
17923,
18183,
18447,
18699,
20487,
20739,
20995,
21255,
21507,
21767,
22023,
22275,
22539,
22799,
21507,
21767,
22023,
22275,
22539,
22799,
24615,
24867,
25123,
25383,
25635,
25895,
26151,
26403,
26667,
26927,
25635,
25895,
26151,
26403,
26667,
26927,
28707,
28967,
29223,
29475,
29735,
29987,
30243,
30503,
30767,
31019,
29735,
29987,
30243,
30503,
30767,
31019,
-32637,
-32377,
-32121,
-31869,
-31609,
-31357,
-31101,
-30841,
-30577,
-30325,
-31609,
-31357,
-31101,
-30841,
-30577,
-30325,
-28537,
-28285,
-28029,
-27769,
-27517,
-27257,
-27001,
-26749,
-26485,
-26225,
-27517,
-27257,
-27001,
-26749,
-26485,
-26225,
-1346,
-1094,
-834,
-582,
-326,
-66,
70,
258,
514,
774,
1026,
1286,
1542,
1794,
2058,
2318,
2590,
2842,
3102,
3354,
3610,
3870,
4098,
4358,
4614,
4866,
5126,
5378,
5634,
5894,
6158,
6410,
6682,
6942,
7194,
7454,
7710,
7962,
8226,
8486,
8742,
8994,
9254,
9506,
9762,
10022,
10286,
10538,
10810,
11070,
11322,
11582,
11838,
12090,
12326,
12578,
12834,
13094,
13346,
13606,
13862,
14114,
14378,
14638,
14910,
15162,
15422,
15674,
15930,
16190,
16386,
16646,
16902,
17154,
17414,
17666,
17922,
18182,
18446,
18698,
18970,
19230,
19482,
19742,
19998,
20250,
20486,
20738,
20994,
21254,
21506,
21766,
22022,
22274,
22538,
22798,
23070,
23322,
23582,
23834,
24090,
24350,
24614,
24866,
25122,
25382,
25634,
25894,
26150,
26402,
26666,
26926,
27198,
27450,
27710,
27962,
28218,
28478,
28706,
28966,
29222,
29474,
29734,
29986,
30242,
30502,
30766,
31018,
31290,
31550,
31802,
32062,
32318,
32570,
-32638,
-32378,
-32122,
-31870,
-31610,
-31358,
-31102,
-30842,
-30578,
-30326,
-30054,
-29794,
-29542,
-29282,
-29026,
-28774,
-28538,
-28286,
-28030,
-27770,
13347,
13607,
13863,
14115,
14379,
14639,
14911,
15163,
15423,
15675,
15931,
16191,
16387,
16647,
16903,
17155,
17415,
17667,
17923,
18183,
18447,
18699,
18971,
19231,
19483,
19743,
19999,
20251,
20487,
20739,
20995,
21255,
21507,
21767,
22023,
22275,
22539,
22799,
23071,
23323,
23583,
23835,
24091,
24351,
24615,
24867,
25123,
25383,
25635,
25895,
26151,
26403,
26667,
26927,
27199,
27451,
27711,
27963,
28219,
28479,
28707,
28967,
29223,
29475,
29735,
29987,
30243,
30503,
30767,
31019,
31291,
31551,
31803,
32063,
32319,
32571,
-32637,
-32377,
-32121,
-31869,
-31609,
-31357,
-31101,
-30841,
-30577,
-30325,
-30053,
-29793,
-29541,
-29281,
-29025,
-28773,
-28537,
-28285,
-28029,
-27769,
-27517,
-27257,
-27001,
-26749,
-26485,
-26225,
-25953,
-25701,
-25441,
-25189,
-24933,
-24673,
-24409,
-24157,
-23901,
-23641,
-23389,
-23129,
-22873,
-22621,
-22357,
-22097,
-21825,
-21573,
-21313,
-21061,
-20805,
-20545,
-20317,
-20057,
-19801,
-19549,
-19289,
-19037,
-18781,
-18521,
-18257,
-18005,
-17733,
-17473,
-17221,
-16961,
-16705,
-16453,
-16249,
-15997,
-15741,
-15481,
-15229,
-14969,
-14713,
-14461,
-14197,
-13937,
-13665,
-13413,
-13153,
-12901,
-12645,
-12385,
-12157,
-11897,
-11641,
-11389,
-11129,
-10877,
-10621,
-10361,
-10097,
-9845,
-9573,
-9313,
-9061,
-8801,
-8545,
-8293,
-8029,
-7769,
-7513,
-7261,
-7001,
-6749,
-6493,
-6233,
-5969,
-5717,
-5445,
-5185,
-4933,
-4673,
-4417,
-4165,
-3929,
-3677,
-3421,
-3161,
-2909,
-2649,
-2393,
-2141,
-1877,
-1617,
-1345,
-1093,
-833,
-581,
-325,
-65,
71,
259,
515,
775,
1027,
1287,
1543,
1795,
2059,
2319,
2591,
2843,
3103,
3355,
3611,
3871,
4099,
4359,
4615,
4867,
5127,
5379,
5635,
5895,
6159,
6411,
6683,
6943,
7195,
7455,
7711,
7963,
8227,
8487,
8743,
8995,
9255,
9507,
9763,
10023,
10287,
10539,
10811,
11071,
11323,
11583,
11839,
12091,
12327,
12579,
12835,
13095,
13347,
13607,
13863,
14115,
14379,
14639,
14911,
15163,
15423,
15675,
15931,
16191,
16387,
16647,
16903,
17155,
17415,
17667,
17923,
18183,
18447,
18699,
18971,
19231,
19483,
19743,
19999,
20251,
20487,
20739,
20995,
21255,
21507,
21767,
22023,
22275,
22539,
22799,
23071,
23323,
23583,
23835,
24091,
24351,
24615,
24867,
25123,
25383,
25635,
25895,
26151,
26403,
26667,
26927,
27199,
27451,
27711,
27963,
28219,
28479,
28707,
28967,
29223,
29475,
29735,
29987,
30243,
30503,
30767,
31019,
31291,
31551,
31803,
32063,
32319,
32571,
-32637,
-32377,
-32121,
-31869,
-31609,
-31357,
-31101,
-30841,
-30577,
-30325,
-30053,
-29793,
-29541,
-29281,
-29025,
-28773,
-28537,
-28285,
-28029,
-27769,
-27517,
-27257,
-27001,
-26749,
-26485,
-26225
};
