#ifndef __STRICT_ANSI__
#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
#if !defined(__ICC)
#define HAVE_INCBIN
#endif
#endif
#endif

#ifdef HAVE_INCBIN
const int fz_font_NotoSansOldTurkic_Regular_ttf_size = 7856;
asm(".section .rodata");
asm(".global fz_font_NotoSansOldTurkic_Regular_ttf");
asm(".type fz_font_NotoSansOldTurkic_Regular_ttf STT_OBJECT");
asm(".size fz_font_NotoSansOldTurkic_Regular_ttf, 7856");
asm(".balign 64");
asm("fz_font_NotoSansOldTurkic_Regular_ttf:");
asm(".incbin \"resources/fonts/noto/NotoSansOldTurkic-Regular.ttf\"");
#else
const int fz_font_NotoSansOldTurkic_Regular_ttf_size = 7856;
const char fz_font_NotoSansOldTurkic_Regular_ttf[] = {
0,1,0,0,0,11,0,128,0,3,0,48,79,83,47,50,123,69,109,116,0,0,1,56,0,0,0,96,
99,109,97,112,0,219,24,51,0,0,2,204,0,0,0,172,103,97,115,112,0,7,0,7,0,0,
30,164,0,0,0,12,103,108,121,102,25,195,243,120,0,0,4,20,0,0,20,86,104,101,
97,100,5,25,8,183,0,0,0,188,0,0,0,54,104,104,101,97,14,251,5,70,0,0,0,244,
0,0,0,36,104,109,116,120,114,247,32,199,0,0,1,152,0,0,1,52,108,111,99,97,
191,148,196,147,0,0,3,120,0,0,0,156,109,97,120,112,0,82,0,67,0,0,1,24,0,0,
0,32,110,97,109,101,143,126,186,46,0,0,24,108,0,0,6,22,112,111,115,116,255,
105,0,102,0,0,30,132,0,0,0,32,0,1,0,0,0,1,5,31,102,171,103,145,95,15,60,245,
0,11,8,0,0,0,0,0,205,100,236,232,0,0,0,0,210,40,203,254,255,186,255,188,6,
178,5,248,0,0,0,9,0,2,0,0,0,0,0,0,0,1,0,0,8,141,253,168,0,0,7,76,255,186,
0,4,6,178,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,77,0,1,0,0,0,77,0,66,0,4,0,0,
0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,225,1,144,0,5,0,0,5,154,5,51,
0,0,1,31,5,154,5,51,0,0,3,209,0,102,2,0,0,0,2,11,5,2,4,5,4,2,2,4,0,0,0,0,
2,0,0,0,0,0,0,0,0,0,0,0,71,79,79,71,0,64,0,0,255,255,8,141,253,168,0,0,8,
141,2,88,0,0,0,1,0,0,0,0,4,45,5,248,0,0,0,32,0,0,4,205,0,193,0,0,0,0,4,20,
0,0,2,20,0,0,5,66,0,41,5,66,0,41,4,94,0,92,3,211,0,205,3,211,0,205,4,18,0,
123,3,76,0,205,4,207,0,205,4,217,0,205,4,203,0,102,6,29,0,31,4,168,0,78,6,
55,0,31,5,227,0,82,5,186,0,174,4,0,0,102,4,127,0,51,4,244,0,41,5,113,0,41,
4,176,0,8,6,74,0,154,6,74,0,154,4,166,0,205,6,35,0,102,4,203,0,102,4,66,0,
205,3,211,0,41,4,90,0,31,5,16,0,205,4,31,0,205,3,211,0,41,4,205,0,2,4,135,
0,113,6,6,0,205,6,72,0,94,3,141,0,51,6,111,0,154,7,76,0,154,6,117,0,143,6,
117,0,143,3,70,0,164,3,160,0,92,3,104,0,102,3,104,0,123,6,29,0,31,3,211,0,
41,3,211,0,205,3,211,0,41,5,16,0,205,4,217,0,27,4,135,0,113,4,123,255,186,
4,217,0,123,5,248,0,205,4,209,0,82,4,209,0,205,4,242,0,31,4,242,0,31,4,217,
0,123,4,207,0,154,4,242,0,31,4,47,0,92,2,82,0,205,6,12,0,195,6,29,0,31,4,
147,0,117,5,23,0,113,5,47,0,92,6,29,0,31,4,217,0,205,5,248,0,184,6,43,0,102,
6,74,0,205,0,0,0,2,0,3,0,1,0,0,0,20,0,3,0,10,0,0,0,84,0,4,0,64,0,0,0,12,0,
8,0,2,0,4,0,0,0,13,0,32,0,160,254,255,255,255,0,0,0,0,0,13,0,32,0,160,254,
255,255,255,0,1,255,245,255,227,255,99,1,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
12,0,0,0,0,0,88,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,13,0,0,0,13,
0,0,0,2,0,0,0,32,0,0,0,32,0,0,0,3,0,0,0,160,0,0,0,160,0,0,0,3,0,0,254,255,
0,0,254,255,0,0,0,1,0,1,12,0,0,1,12,72,0,0,0,4,0,0,0,21,0,21,0,21,0,21,0,
47,0,73,0,109,0,128,0,149,0,210,0,247,1,14,1,48,1,103,1,128,1,167,1,212,2,
9,2,36,2,79,2,112,2,178,2,230,3,4,3,34,3,63,3,101,3,156,3,210,3,243,4,14,
4,43,4,70,4,121,4,141,4,168,4,192,4,220,5,8,5,39,5,73,5,106,5,205,6,20,6,
58,6,82,6,132,6,182,6,223,6,244,7,8,7,27,7,58,7,86,7,110,7,134,7,168,7,191,
7,215,7,239,8,15,8,47,8,80,8,102,8,132,8,192,8,205,8,226,8,247,9,27,9,61,
9,105,9,140,9,174,9,196,10,0,10,43,0,2,0,193,0,0,4,10,5,182,0,3,0,7,0,0,19,
33,17,33,55,33,17,33,193,3,73,252,183,104,2,121,253,135,5,182,250,74,104,
4,230,0,0,1,0,41,0,0,5,25,5,182,0,9,0,0,1,51,1,7,1,17,35,1,55,1,2,59,185,
2,37,101,254,64,185,253,238,104,1,170,5,182,254,125,143,1,65,251,27,1,111,
149,254,207,0,1,0,41,0,0,5,25,5,182,0,9,0,0,37,1,23,1,35,17,1,39,1,51,3,6,
1,170,105,253,237,184,254,63,100,2,37,184,211,1,49,149,254,145,4,229,254,
191,143,1,131,0,0,1,0,92,255,227,4,2,5,201,0,13,0,0,37,7,1,1,39,1,17,1,55,
1,1,23,1,17,4,2,149,254,194,254,195,150,1,117,254,139,150,1,61,1,62,149,254,
139,63,92,1,187,254,69,92,2,5,1,36,2,5,92,254,69,1,187,92,253,251,254,220,
0,0,1,0,205,0,0,3,170,5,182,0,6,0,0,51,17,51,1,7,1,17,205,184,2,37,100,254,
63,5,182,254,125,143,1,65,251,27,0,0,1,0,205,0,0,3,170,5,182,0,7,0,0,1,1,
7,1,17,35,17,51,1,133,2,37,100,254,63,184,184,3,160,254,125,144,1,66,253,
49,5,182,0,2,0,123,255,238,3,152,5,217,0,27,0,35,0,0,1,20,7,22,23,7,38,39,
6,7,39,54,55,38,53,52,55,38,39,55,22,23,54,55,23,6,7,22,5,20,23,54,53,52,
39,6,3,90,211,121,152,99,170,131,133,166,98,148,124,211,211,124,148,98,169,
130,129,172,99,152,121,211,254,19,155,158,158,155,2,227,225,217,97,85,133,
97,105,106,96,133,86,96,217,225,222,219,97,87,133,97,106,105,98,133,86,98,
219,222,160,167,166,161,159,167,169,0,0,1,0,205,0,0,3,25,5,182,0,23,0,0,1,
14,3,21,21,35,53,52,54,54,55,46,2,53,53,51,21,20,30,2,3,25,139,151,79,35,
184,58,137,124,125,136,58,184,34,79,150,2,219,113,146,117,127,132,96,133,
151,173,171,103,103,172,174,149,133,96,130,128,117,146,0,1,0,205,0,0,4,53,
5,182,0,9,0,0,19,51,1,17,51,17,35,1,17,35,205,184,1,248,184,184,254,8,184,
5,182,253,209,2,47,252,199,2,55,251,76,0,0,1,0,205,0,0,4,94,5,182,0,17,0,
0,1,1,17,35,17,51,17,1,38,53,52,54,55,51,6,21,20,23,3,184,253,205,184,184,
1,195,35,65,54,194,135,80,2,18,1,68,252,170,5,182,254,92,254,250,99,153,124,
208,98,214,226,205,194,0,0,1,0,102,255,236,4,100,5,182,0,36,0,0,1,21,20,22,
23,30,2,21,20,6,6,35,34,38,38,53,52,54,55,51,6,6,21,20,22,51,50,54,53,52,
38,39,38,38,53,53,2,207,37,51,137,118,62,133,236,149,153,229,122,45,37,187,
37,47,173,150,148,182,101,139,92,73,5,182,225,44,71,43,115,159,190,119,140,
240,136,124,231,150,94,170,54,61,169,88,149,186,189,157,125,192,117,75,128,
98,231,0,0,1,0,31,255,236,5,254,5,203,0,7,0,0,19,9,2,39,9,2,31,2,239,2,240,
253,16,120,2,118,254,2,253,138,2,219,2,240,253,16,253,17,120,2,119,1,254,
253,137,0,0,2,0,78,0,0,4,90,5,182,0,10,0,14,0,0,1,51,9,2,35,1,1,35,1,1,55,
9,2,1,240,192,1,170,254,113,1,143,223,254,217,254,217,223,1,143,254,113,211,
1,51,1,51,254,201,5,182,253,250,254,39,254,41,1,102,254,154,1,215,1,217,4,
254,150,1,106,1,123,0,2,0,31,0,0,6,25,5,203,0,13,0,17,0,0,1,7,39,1,1,35,1,
1,35,1,1,7,39,9,4,6,25,107,242,254,201,1,156,215,254,209,254,206,215,1,156,
254,205,236,112,2,254,254,207,1,47,1,49,254,209,2,174,108,247,254,158,254,
41,1,92,254,164,1,215,1,96,245,108,3,29,253,227,254,164,1,92,1,59,0,0,3,0,
82,0,0,5,145,5,195,0,12,0,16,0,29,0,0,1,52,37,23,6,6,21,20,22,23,7,38,38,
7,51,17,35,3,20,6,7,39,54,54,53,52,38,39,55,4,3,139,1,166,96,168,167,171,
164,96,216,206,245,182,182,62,205,217,96,173,163,168,168,96,1,166,3,213,253,
241,134,96,187,77,85,189,89,133,130,244,91,253,0,3,213,121,244,131,133,94,
189,80,77,187,96,134,244,0,0,3,0,174,0,0,5,12,5,182,0,3,0,7,0,11,0,0,1,51,
17,35,1,51,17,35,1,51,17,35,2,129,184,184,254,45,184,184,3,166,184,184,3,
0,253,0,5,182,253,0,3,0,253,0,0,1,0,102,255,238,3,225,5,217,0,19,0,0,19,52,
0,37,1,7,37,6,7,1,7,1,6,21,20,18,23,7,36,0,102,1,0,1,23,1,100,108,254,245,
186,82,2,58,105,253,244,8,251,242,98,254,229,254,219,2,248,223,1,96,162,254,
219,127,217,124,136,254,135,137,1,96,43,69,181,254,182,134,133,165,1,137,
0,1,0,51,255,227,4,96,5,203,0,12,0,0,1,1,7,39,7,17,1,7,1,1,39,1,17,3,16,1,
80,129,207,174,1,119,149,254,194,254,195,150,1,119,5,203,254,176,123,205,
207,254,70,253,251,92,1,187,254,69,92,2,5,1,239,0,0,2,0,41,255,188,4,203,
5,231,0,15,0,31,0,0,1,53,1,53,1,53,1,55,1,21,1,21,1,21,1,39,1,53,1,53,1,53,
1,55,1,21,1,21,1,21,1,39,3,213,254,160,1,96,254,231,144,1,127,254,164,1,92,
254,63,119,254,246,254,160,1,96,254,232,143,1,127,254,164,1,92,254,63,118,
1,113,8,1,74,10,1,112,9,1,47,114,254,95,9,254,144,8,254,180,8,254,75,129,
1,52,8,1,74,10,1,112,9,1,47,114,254,95,9,254,144,8,254,180,8,254,75,129,0,
2,0,41,255,207,5,72,5,231,0,11,0,23,0,0,1,53,1,53,1,55,1,21,1,21,1,7,1,53,
1,53,1,55,1,21,1,21,1,7,2,117,1,221,254,115,143,1,244,254,39,1,168,119,251,
137,1,221,254,115,143,1,244,254,39,1,168,119,1,225,11,1,237,8,1,148,114,253,
250,8,254,19,9,254,105,125,2,18,11,1,237,8,1,148,114,253,250,8,254,19,9,254,
105,125,0,1,0,8,0,0,4,168,5,182,0,11,0,0,33,35,1,1,35,1,1,51,1,1,51,1,4,168,
209,254,125,254,119,195,1,230,254,57,205,1,102,1,105,194,254,60,2,123,253,
133,2,250,2,188,253,195,2,61,253,72,0,1,0,154,0,0,5,176,5,182,0,15,0,0,1,
33,17,35,17,33,17,35,17,33,17,51,17,33,17,51,5,176,253,209,184,254,137,184,
2,47,184,1,119,184,2,135,253,121,2,135,253,121,3,51,2,131,253,125,2,131,0,
1,0,154,0,0,5,176,5,182,0,15,0,0,33,35,17,33,17,35,17,33,17,51,17,33,17,51,
17,33,5,176,184,254,137,184,253,209,184,1,119,184,2,47,2,131,253,125,2,131,
3,51,253,121,2,135,253,121,0,2,0,205,255,244,4,63,5,203,0,8,0,16,0,0,1,20,
0,5,39,17,55,4,0,1,62,2,53,52,0,39,4,63,254,113,254,162,133,129,1,132,1,109,
253,70,150,243,121,254,248,250,2,227,210,254,113,142,59,5,90,66,157,254,143,
253,6,65,186,195,94,151,1,19,113,0,0,2,0,102,0,55,5,188,5,131,0,15,0,31,0,
0,1,20,2,4,35,34,36,2,53,52,18,36,51,50,4,18,5,20,22,22,51,50,54,54,53,52,
38,38,35,34,6,6,5,188,179,254,190,181,190,254,194,176,182,1,63,185,181,1,
60,183,251,101,130,229,138,138,228,128,129,228,135,138,231,130,2,223,189,
254,202,181,182,1,52,192,187,1,55,176,176,254,202,190,145,236,133,132,235,
147,145,236,131,133,235,0,0,1,0,102,0,0,4,100,5,203,0,35,0,0,33,53,52,54,
55,54,54,53,52,38,35,34,6,21,20,22,23,35,38,38,53,52,0,51,50,22,22,21,20,
6,6,7,6,6,21,21,2,23,74,96,126,109,176,152,149,176,47,37,187,38,44,1,33,242,
142,226,123,67,129,121,51,37,231,96,126,79,106,204,121,160,190,187,153,86,
169,59,53,159,96,234,1,26,131,226,131,124,204,174,100,43,76,45,229,0,0,2,
0,205,0,0,3,219,5,201,0,8,0,14,0,0,51,17,55,4,17,20,0,5,17,1,52,38,39,17,
36,205,123,2,147,254,218,254,208,1,158,215,199,1,158,5,121,80,233,254,188,
154,254,245,128,254,137,3,147,96,190,87,253,29,183,0,0,1,0,41,0,0,3,6,5,248,
0,9,0,0,1,1,55,1,17,35,17,1,55,1,2,78,253,219,100,2,121,184,253,219,100,1,
193,4,35,1,69,144,254,137,251,127,2,23,1,69,144,254,243,0,0,1,0,31,0,0,4,
59,5,203,0,10,0,0,19,9,2,55,1,1,17,35,17,1,152,1,149,1,29,254,106,121,2,14,
254,78,184,254,78,4,33,254,127,1,49,1,129,121,254,6,254,57,253,246,2,10,1,
158,0,1,0,205,0,0,4,68,5,182,0,13,0,0,1,33,17,35,17,33,17,35,53,33,17,33,
17,35,3,139,253,250,184,3,119,185,253,250,2,191,185,2,119,253,137,5,182,254,
105,235,254,25,252,221,0,3,0,205,255,244,3,184,5,203,0,14,0,21,0,28,0,0,19,
55,4,4,21,20,6,7,22,22,21,20,4,5,39,55,54,54,53,52,38,39,53,54,54,53,52,38,
39,205,129,1,57,1,49,143,156,140,159,254,197,254,213,133,184,176,203,189,
190,210,169,196,183,5,137,66,83,205,128,105,159,76,52,165,92,137,219,74,59,
113,50,137,63,64,149,69,64,84,130,72,70,128,50,0,0,1,0,41,0,0,3,6,5,182,0,
6,0,0,1,17,35,1,55,1,17,3,6,184,253,219,100,1,193,5,182,250,74,1,131,143,
254,191,4,229,0,1,0,2,0,0,4,201,5,201,0,10,0,0,19,55,1,22,23,54,55,1,23,1,
35,2,174,1,88,68,26,22,73,1,84,176,253,250,185,5,139,62,252,67,192,127,113,
210,3,185,62,250,117,0,0,1,0,113,0,0,4,23,5,203,0,8,0,0,1,1,23,1,17,35,17,
1,55,2,68,1,61,150,254,137,185,254,138,149,4,16,1,187,92,253,251,252,150,
3,106,2,5,92,0,1,0,205,0,0,5,57,5,195,0,11,0,0,1,1,17,35,17,55,1,1,23,17,
35,17,2,252,254,123,170,96,1,209,1,219,96,182,3,90,1,82,251,84,5,174,21,254,
112,1,144,21,250,82,4,172,0,2,0,94,255,217,6,41,5,211,0,13,0,17,0,0,5,39,
55,1,1,53,1,1,53,1,1,39,55,9,4,3,12,108,248,254,157,254,41,1,92,254,164,1,
215,1,97,246,108,3,29,253,227,254,164,1,92,1,60,39,107,241,1,56,254,100,215,
1,47,1,49,215,254,101,1,51,235,113,253,2,1,49,254,209,254,207,1,47,0,1,0,
51,255,238,3,18,5,217,0,11,0,0,1,16,1,39,0,17,52,0,37,55,4,0,3,18,253,132,
97,2,37,254,229,254,244,99,1,78,1,46,2,227,254,125,254,142,145,1,59,1,41,
152,1,49,158,143,194,254,144,0,0,1,0,154,0,0,5,213,5,182,0,17,0,0,33,17,37,
17,35,17,51,5,17,51,17,5,17,51,17,35,37,17,2,219,254,119,184,184,1,137,184,
1,138,184,184,254,118,1,84,246,253,182,3,14,243,3,155,254,150,226,2,76,252,
240,223,252,123,0,0,1,0,154,0,0,6,178,5,182,0,15,0,0,1,51,1,17,51,17,35,1,
17,35,1,17,35,17,51,1,3,74,184,1,248,184,184,254,8,184,254,8,184,184,1,248,
5,182,253,209,2,47,252,199,2,55,251,76,2,47,253,209,3,57,253,201,0,4,0,143,
0,55,5,229,4,221,0,29,0,41,0,53,0,65,0,0,1,22,18,21,20,2,4,35,34,36,2,53,
52,18,55,23,6,6,21,20,22,22,51,50,54,54,53,52,38,39,1,52,54,51,50,22,21,20,
6,35,34,38,3,52,54,51,50,22,21,20,6,35,34,38,37,52,54,51,50,22,21,20,6,35,
34,38,5,6,108,115,179,254,190,181,190,254,194,176,118,112,123,78,88,130,229,
138,138,228,128,82,72,254,68,64,47,50,58,61,47,47,64,168,64,45,48,60,59,49,
45,64,1,82,64,47,50,56,57,49,47,64,4,215,97,254,253,148,189,254,202,181,182,
1,52,192,151,1,6,95,121,68,199,122,145,236,133,132,235,147,118,193,68,253,
203,55,51,57,49,50,57,51,1,91,55,51,58,48,49,60,53,66,55,51,59,47,47,60,53,
0,0,3,0,143,0,55,5,229,5,131,0,15,0,31,0,43,0,0,1,20,2,4,35,34,36,2,53,52,
18,36,51,50,4,18,5,20,22,22,51,50,54,54,53,52,38,38,35,34,6,6,5,52,54,51,
50,22,21,20,6,35,34,38,5,229,179,254,190,181,190,254,194,176,182,1,63,185,
181,1,60,183,251,101,130,229,138,138,228,128,129,228,135,138,231,130,1,141,
62,45,48,56,59,45,45,62,2,223,189,254,202,181,182,1,52,192,187,1,55,176,176,
254,202,190,145,236,133,132,235,147,145,236,131,133,235,144,60,55,62,53,53,
61,55,0,0,1,0,164,0,0,3,18,5,182,0,21,0,0,1,38,38,53,53,51,21,20,22,23,5,
5,6,6,21,21,35,53,52,54,55,37,2,0,174,174,184,193,245,254,215,1,41,245,193,
184,174,174,254,238,3,166,96,225,136,71,59,117,204,136,215,215,136,205,116,
59,72,137,222,97,203,0,0,1,0,92,255,215,3,66,5,223,0,7,0,0,19,55,9,2,7,1,
1,182,125,2,15,254,24,1,150,129,253,237,1,234,5,94,129,253,240,254,24,254,
107,123,2,16,1,232,0,1,0,102,255,221,2,238,5,213,0,28,0,0,1,22,23,54,53,52,
38,39,55,4,17,20,7,22,21,16,5,39,36,53,52,39,6,7,39,54,55,38,39,1,141,77,
83,18,245,228,74,2,62,76,76,253,194,74,1,217,20,57,111,78,127,35,36,122,3,
203,45,72,34,42,115,208,90,150,245,254,194,84,119,116,87,254,194,241,148,
186,225,30,38,47,66,142,73,33,34,70,0,1,0,123,255,221,3,2,5,213,0,28,0,0,
1,38,39,6,21,20,22,23,7,36,17,52,55,38,53,16,37,23,4,21,20,23,54,55,23,6,
7,22,23,1,219,77,83,18,245,228,74,253,195,76,76,2,61,74,254,39,20,50,118,
78,124,38,36,122,1,231,45,72,34,42,115,208,90,150,242,1,65,87,116,119,84,
1,62,241,147,186,226,30,38,41,72,141,72,35,34,70,0,3,0,31,255,236,5,254,5,
203,0,3,0,7,0,19,0,0,9,3,21,9,2,33,52,54,51,50,22,21,20,6,35,34,38,5,254,
253,16,253,17,2,239,254,2,1,254,1,254,253,152,61,45,42,63,63,42,45,61,2,219,
253,17,2,239,2,240,242,254,2,254,2,1,254,60,55,55,60,59,56,56,0,0,1,0,41,
0,0,3,6,5,182,0,7,0,0,1,1,55,1,17,51,17,35,2,78,253,219,100,1,193,184,184,
2,23,1,131,143,254,190,2,207,250,74,0,1,0,205,0,0,3,170,5,182,0,7,0,0,33,
35,17,51,17,1,23,1,1,133,184,184,1,193,100,253,219,5,182,253,49,1,66,143,
254,125,0,1,0,41,0,0,3,6,5,182,0,6,0,0,33,17,1,39,1,51,17,2,78,254,63,100,
2,37,184,4,229,254,191,143,1,131,250,74,0,1,0,205,0,0,4,68,5,182,0,15,0,0,
1,5,17,35,17,51,21,37,17,35,53,5,17,37,17,35,3,139,253,250,184,184,2,191,
185,253,250,2,191,185,2,66,164,254,98,5,182,219,219,254,105,182,164,254,25,
217,252,221,0,1,0,27,0,0,4,190,5,197,0,11,0,0,33,35,17,1,55,1,17,51,17,1,
23,1,2,201,185,254,11,133,1,112,185,1,112,133,254,11,2,197,2,155,101,254,
20,1,221,254,35,1,236,101,253,101,0,1,0,113,0,0,4,23,5,203,0,8,0,0,1,1,39,
1,17,51,17,1,7,2,68,254,194,149,1,118,185,1,119,150,1,186,254,70,92,2,4,3,
107,252,149,253,252,92,0,1,255,186,0,0,4,23,5,182,0,7,0,0,1,1,39,1,1,51,1,
7,2,80,254,182,149,1,120,253,209,224,3,125,150,1,209,254,47,92,2,10,3,80,
250,166,92,0,0,1,0,123,0,0,4,12,5,182,0,17,0,0,1,1,17,51,17,35,17,1,22,21,
20,6,7,35,54,53,52,39,1,33,2,51,184,184,254,61,35,56,63,194,135,80,3,164,
254,188,3,86,250,74,1,164,1,6,99,153,109,208,113,214,226,204,196,0,0,1,0,
205,0,0,5,63,5,182,0,9,0,0,19,51,1,17,51,17,35,1,17,35,205,184,3,2,184,184,
252,254,184,5,182,252,219,3,37,251,209,3,45,251,76,0,0,2,0,82,0,0,4,4,5,182,
0,5,0,8,0,0,1,51,17,35,1,53,1,17,1,3,76,184,184,253,6,2,250,253,176,5,182,
250,74,2,123,182,253,180,3,242,254,4,0,2,0,205,0,0,4,127,5,182,0,5,0,8,0,
0,1,21,1,35,17,51,1,1,17,4,127,253,6,184,184,2,80,253,176,3,49,182,253,133,
5,182,253,37,1,252,252,14,0,1,0,31,0,0,4,211,5,182,0,15,0,0,33,2,37,53,4,
23,17,51,17,54,36,55,21,6,4,7,2,55,137,254,113,1,81,173,184,82,1,4,168,196,
254,245,74,1,156,20,168,16,217,4,71,251,185,106,119,8,168,10,209,213,0,1,
0,31,0,0,4,211,5,182,0,14,0,0,1,22,4,23,21,36,39,17,35,17,6,5,53,36,19,2,
186,74,1,14,193,254,164,162,184,167,254,169,1,143,137,5,182,213,209,10,168,
20,214,251,184,4,72,214,20,168,20,1,156,0,0,1,0,123,0,0,4,12,5,182,0,17,0,
0,19,54,53,52,39,51,22,22,21,20,7,1,17,51,17,35,17,1,178,80,135,194,54,65,
35,1,195,184,184,253,205,2,111,194,205,226,214,98,208,124,153,99,1,6,1,164,
250,74,3,86,254,188,0,1,0,154,0,0,4,2,5,182,0,9,0,0,33,35,17,1,35,17,51,17,
1,51,4,2,184,254,8,184,184,1,248,184,4,180,253,201,3,57,253,209,2,47,0,1,
0,31,0,0,4,211,5,203,0,12,0,0,1,39,7,39,9,3,7,39,7,17,35,2,29,174,207,129,
1,80,1,10,1,10,1,80,129,207,174,184,3,254,207,205,123,1,80,254,209,1,47,254,
176,123,205,207,252,2,0,1,0,92,0,0,3,160,5,203,0,38,0,0,1,34,6,6,7,30,3,21,
20,6,7,35,54,53,52,38,39,39,46,2,53,52,54,55,23,7,6,6,21,20,22,23,18,18,51,
51,3,160,80,107,85,38,52,109,87,56,39,33,184,73,99,106,118,133,124,67,111,
100,100,28,42,54,87,103,60,217,177,5,4,147,90,195,171,39,84,105,133,88,62,
142,62,135,113,83,147,75,82,92,139,162,100,118,184,53,129,22,31,108,69,86,
150,79,1,29,1,6,0,1,0,205,0,0,1,133,5,182,0,3,0,0,19,51,17,35,205,184,184,
5,182,250,74,0,0,2,0,195,0,82,5,74,5,100,0,3,0,7,0,0,19,33,17,33,37,17,33,
17,195,4,135,251,121,3,213,252,221,5,100,250,238,162,3,207,252,49,0,1,0,31,
2,98,5,254,5,203,0,5,0,0,19,1,1,7,1,1,31,2,239,2,240,121,253,137,253,138,
2,219,2,240,253,16,121,2,119,253,137,0,0,1,0,117,0,0,4,27,5,203,0,16,0,0,
1,33,17,35,17,33,53,33,53,1,55,1,1,23,1,21,33,3,254,254,166,184,254,165,1,
91,254,137,149,1,62,1,61,150,254,137,1,90,2,51,253,205,2,51,148,163,2,5,92,
254,69,1,187,92,253,251,163,0,0,1,0,113,0,0,4,92,5,203,0,16,0,0,1,55,39,55,
23,55,23,7,23,7,39,7,17,35,17,1,55,2,68,133,178,92,172,98,150,111,180,90,
176,178,185,254,138,149,4,16,185,139,119,135,135,92,152,139,117,135,244,252,
150,3,106,2,5,92,0,2,0,92,0,0,4,211,5,240,0,12,0,16,0,0,1,1,35,1,1,17,1,39,
1,1,7,1,17,19,9,2,4,158,254,86,185,254,86,1,170,254,123,90,2,60,2,59,90,254,
123,194,254,226,254,225,1,31,1,211,254,45,1,211,1,166,1,100,254,195,131,1,
205,254,51,131,1,61,254,156,254,86,1,35,254,221,254,205,0,2,0,31,255,236,
5,254,5,203,0,5,0,11,0,0,19,1,1,7,1,1,3,1,1,7,1,1,31,2,239,2,240,121,253,
137,253,138,121,2,239,2,240,121,253,137,253,138,2,219,2,240,253,16,121,2,
119,253,137,254,2,2,240,253,16,120,2,118,253,138,0,1,0,205,0,0,4,94,5,182,
0,17,0,0,1,6,21,20,23,35,38,38,53,52,55,1,17,35,17,51,17,1,4,39,80,135,194,
63,56,35,254,61,184,184,2,51,3,72,196,204,226,214,115,208,107,153,99,254,
250,254,92,5,182,252,170,1,68,0,0,1,0,184,0,0,5,43,5,182,0,9,0,0,33,35,17,
1,35,17,51,17,1,51,5,43,184,252,254,185,185,3,2,184,4,180,252,211,4,47,252,
219,3,37,0,1,0,102,255,215,5,188,5,182,0,35,0,0,5,38,2,53,52,18,36,55,17,
51,17,23,1,51,1,22,18,21,20,2,7,39,54,54,53,52,38,38,35,34,6,6,21,20,22,23,
1,70,108,116,154,1,16,164,185,8,1,14,234,254,188,186,217,116,113,123,78,88,
131,230,137,138,228,127,82,71,35,98,1,4,146,172,1,37,187,22,1,63,254,193,
2,1,65,254,142,81,254,181,213,150,254,252,98,121,68,199,122,145,237,132,133,
235,146,118,193,68,0,3,0,205,0,0,5,125,5,182,0,9,0,14,0,19,0,0,1,1,35,17,
51,1,1,51,17,35,3,51,17,35,1,1,35,17,51,1,3,39,254,90,180,180,1,166,1,172,
170,170,8,8,8,254,200,253,246,8,8,1,51,2,80,253,176,5,182,253,174,2,82,250,
74,1,39,3,102,254,78,1,166,252,178,1,168,0,0,0,0,0,0,15,0,186,0,3,0,1,4,9,
0,0,0,94,0,0,0,3,0,1,4,9,0,1,0,40,0,94,0,3,0,1,4,9,0,2,0,14,0,134,0,3,0,1,
4,9,0,3,0,78,0,148,0,3,0,1,4,9,0,4,0,40,0,94,0,3,0,1,4,9,0,5,0,30,0,226,0,
3,0,1,4,9,0,6,0,34,1,0,0,3,0,1,4,9,0,7,0,68,1,34,0,3,0,1,4,9,0,8,0,42,1,102,
0,3,0,1,4,9,0,9,0,40,1,144,0,3,0,1,4,9,0,10,0,96,1,184,0,3,0,1,4,9,0,11,0,
62,2,24,0,3,0,1,4,9,0,12,0,60,2,86,0,3,0,1,4,9,0,13,2,150,2,146,0,3,0,1,4,
9,0,14,0,52,5,40,0,67,0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,32,
0,50,0,48,0,49,0,51,0,32,0,71,0,111,0,111,0,103,0,108,0,101,0,32,0,73,0,110,
0,99,0,46,0,32,0,65,0,108,0,108,0,32,0,82,0,105,0,103,0,104,0,116,0,115,0,
32,0,82,0,101,0,115,0,101,0,114,0,118,0,101,0,100,0,46,0,78,0,111,0,116,0,
111,0,32,0,83,0,97,0,110,0,115,0,32,0,79,0,108,0,100,0,32,0,84,0,117,0,114,
0,107,0,105,0,99,0,82,0,101,0,103,0,117,0,108,0,97,0,114,0,77,0,111,0,110,
0,111,0,116,0,121,0,112,0,101,0,32,0,73,0,109,0,97,0,103,0,105,0,110,0,103,
0,32,0,45,0,32,0,78,0,111,0,116,0,111,0,32,0,83,0,97,0,110,0,115,0,32,0,79,
0,108,0,100,0,32,0,84,0,117,0,114,0,107,0,105,0,99,0,86,0,101,0,114,0,115,
0,105,0,111,0,110,0,32,0,49,0,46,0,48,0,50,0,32,0,117,0,104,0,78,0,111,0,
116,0,111,0,83,0,97,0,110,0,115,0,79,0,108,0,100,0,84,0,117,0,114,0,107,0,
105,0,99,0,78,0,111,0,116,0,111,0,32,0,105,0,115,0,32,0,97,0,32,0,116,0,114,
0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,32,0,111,0,102,0,32,0,71,0,111,
0,111,0,103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,77,0,111,0,110,0,111,
0,116,0,121,0,112,0,101,0,32,0,73,0,109,0,97,0,103,0,105,0,110,0,103,0,32,
0,73,0,110,0,99,0,46,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,
0,68,0,101,0,115,0,105,0,103,0,110,0,32,0,84,0,101,0,97,0,109,0,68,0,97,0,
116,0,97,0,32,0,117,0,110,0,104,0,105,0,110,0,116,0,101,0,100,0,46,0,32,0,
68,0,101,0,115,0,105,0,103,0,110,0,101,0,100,0,32,0,98,0,121,0,32,0,77,0,
111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,100,0,101,0,115,0,105,0,103,
0,110,0,32,0,116,0,101,0,97,0,109,0,46,0,104,0,116,0,116,0,112,0,58,0,47,
0,47,0,119,0,119,0,119,0,46,0,103,0,111,0,111,0,103,0,108,0,101,0,46,0,99,
0,111,0,109,0,47,0,103,0,101,0,116,0,47,0,110,0,111,0,116,0,111,0,47,0,104,
0,116,0,116,0,112,0,58,0,47,0,47,0,119,0,119,0,119,0,46,0,109,0,111,0,110,
0,111,0,116,0,121,0,112,0,101,0,46,0,99,0,111,0,109,0,47,0,115,0,116,0,117,
0,100,0,105,0,111,0,84,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,
0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,101,0,32,0,105,0,115,0,32,0,108,
0,105,0,99,0,101,0,110,0,115,0,101,0,100,0,32,0,117,0,110,0,100,0,101,0,114,
0,32,0,116,0,104,0,101,0,32,0,83,0,73,0,76,0,32,0,79,0,112,0,101,0,110,0,
32,0,70,0,111,0,110,0,116,0,32,0,76,0,105,0,99,0,101,0,110,0,115,0,101,0,
44,0,32,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,46,0,49,0,46,
0,32,0,84,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,
102,0,116,0,119,0,97,0,114,0,101,0,32,0,105,0,115,0,32,0,100,0,105,0,115,
0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,100,0,32,0,111,0,110,0,32,0,97,
0,110,0,32,0,34,0,65,0,83,0,32,0,73,0,83,0,34,0,32,0,66,0,65,0,83,0,73,0,
83,0,44,0,32,0,87,0,73,0,84,0,72,0,79,0,85,0,84,0,32,0,87,0,65,0,82,0,82,
0,65,0,78,0,84,0,73,0,69,0,83,0,32,0,79,0,82,0,32,0,67,0,79,0,78,0,68,0,73,
0,84,0,73,0,79,0,78,0,83,0,32,0,79,0,70,0,32,0,65,0,78,0,89,0,32,0,75,0,73,
0,78,0,68,0,44,0,32,0,101,0,105,0,116,0,104,0,101,0,114,0,32,0,101,0,120,
0,112,0,114,0,101,0,115,0,115,0,32,0,111,0,114,0,32,0,105,0,109,0,112,0,108,
0,105,0,101,0,100,0,46,0,32,0,83,0,101,0,101,0,32,0,116,0,104,0,101,0,32,
0,83,0,73,0,76,0,32,0,79,0,112,0,101,0,110,0,32,0,70,0,111,0,110,0,116,0,
32,0,76,0,105,0,99,0,101,0,110,0,115,0,101,0,32,0,102,0,111,0,114,0,32,0,
116,0,104,0,101,0,32,0,115,0,112,0,101,0,99,0,105,0,102,0,105,0,99,0,32,0,
108,0,97,0,110,0,103,0,117,0,97,0,103,0,101,0,44,0,32,0,112,0,101,0,114,0,
109,0,105,0,115,0,115,0,105,0,111,0,110,0,115,0,32,0,97,0,110,0,100,0,32,
0,108,0,105,0,109,0,105,0,116,0,97,0,116,0,105,0,111,0,110,0,115,0,32,0,103,
0,111,0,118,0,101,0,114,0,110,0,105,0,110,0,103,0,32,0,121,0,111,0,117,0,
114,0,32,0,117,0,115,0,101,0,32,0,111,0,102,0,32,0,116,0,104,0,105,0,115,
0,32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,97,0,114,
0,101,0,46,0,104,0,116,0,116,0,112,0,58,0,47,0,47,0,115,0,99,0,114,0,105,
0,112,0,116,0,115,0,46,0,115,0,105,0,108,0,46,0,111,0,114,0,103,0,47,0,79,
0,70,0,76,0,0,0,3,0,0,0,0,0,0,255,102,0,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,2,0,8,0,2,255,255,0,3,};
#endif
