const unsigned int bulbLightNumVertices=67;
const unsigned int bulbLightNumFaces=360;
const Vertex3D_NoTex2 bulbLight[67]=
{
{ 0.220295f,-0.381570f,0.984870f, 0.496400f,-0.859800f,0.119300f, 0.698812f,0.614784f},
{ 0.000000f,-0.407060f,1.148565f, 0.000000f,-0.924900f,0.380300f, 0.688975f,0.500000f},
{ 0.000000f,-0.440600f,0.984870f, 0.000000f,-0.992800f,0.119300f, 0.729568f,0.500000f},
{ 0.203525f,-0.352525f,1.148565f, 0.462400f,-0.800900f,0.380300f, 0.663657f,0.594488f},
{ 0.352515f,-0.203530f,1.148565f, 0.801000f,-0.462400f,0.380300f, 0.594488f,0.663657f},
{ 0.381560f,-0.220300f,0.984870f, 0.859800f,-0.496400f,0.119300f, 0.614784f,0.698812f},
{ 0.440585f,0.000000f,0.984870f, 0.992900f,0.000000f,0.119300f, 0.500000f,0.729568f},
{ 0.407050f,0.000000f,1.148565f, 0.924900f,0.000000f,0.380300f, 0.500000f,0.688975f},
{ 0.352515f,0.203530f,1.148565f, 0.801000f,0.462400f,0.380300f, 0.405512f,0.663657f},
{ 0.381560f,0.220300f,0.984870f, 0.859800f,0.496400f,0.119300f, 0.385216f,0.698812f},
{ 0.220295f,0.381570f,0.984870f, 0.496400f,0.859800f,0.119300f, 0.301188f,0.614784f},
{ 0.203525f,0.352525f,1.148565f, 0.462400f,0.800900f,0.380300f, 0.336343f,0.594488f},
{ 0.000000f,0.407060f,1.148565f, 0.000000f,0.924900f,0.380300f, 0.311025f,0.500000f},
{ 0.000000f,0.440600f,0.984870f, 0.000000f,0.992800f,0.119300f, 0.270432f,0.500000f},
{ -0.220295f,0.381570f,0.984870f, -0.496400f,0.859800f,0.119300f, 0.301188f,0.385216f},
{ -0.203525f,0.352525f,1.148565f, -0.462400f,0.800900f,0.380300f, 0.336343f,0.405512f},
{ -0.352515f,0.203530f,1.148565f, -0.801000f,0.462400f,0.380300f, 0.405512f,0.336343f},
{ -0.381560f,0.220300f,0.984870f, -0.859800f,0.496400f,0.119300f, 0.385216f,0.301188f},
{ -0.440585f,0.000000f,0.984870f, -0.992900f,0.000000f,0.119300f, 0.500000f,0.270432f},
{ -0.407050f,0.000000f,1.148565f, -0.924900f,0.000000f,0.380300f, 0.500000f,0.311025f},
{ -0.352515f,-0.203530f,1.148565f, -0.801000f,-0.462400f,0.380300f, 0.594488f,0.336343f},
{ -0.381560f,-0.220300f,0.984870f, -0.859800f,-0.496400f,0.119300f, 0.614784f,0.301188f},
{ -0.220295f,-0.381570f,0.984870f, -0.496400f,-0.859800f,0.119300f, 0.698812f,0.385216f},
{ -0.203525f,-0.352525f,1.148565f, -0.462400f,-0.800900f,0.380300f, 0.663657f,0.405512f},
{ 0.155770f,-0.269810f,1.287345f, 0.353500f,-0.612300f,0.707200f, 0.625258f,0.572318f},
{ 0.000000f,-0.311550f,1.287345f, 0.000000f,-0.713200f,0.700900f, 0.644635f,0.500000f},
{ 0.269805f,-0.155775f,1.287345f, 0.617700f,-0.356600f,0.700900f, 0.572318f,0.625258f},
{ 0.311540f,0.000000f,1.287345f, 0.707000f,0.000000f,0.707200f, 0.500000f,0.644635f},
{ 0.269805f,0.155775f,1.287345f, 0.617700f,0.356600f,0.700900f, 0.427682f,0.625258f},
{ 0.155770f,0.269810f,1.287345f, 0.353500f,0.612300f,0.707200f, 0.374742f,0.572318f},
{ 0.000000f,0.311550f,1.287345f, 0.000000f,0.713200f,0.700900f, 0.355365f,0.500000f},
{ -0.155770f,0.269810f,1.287345f, -0.353500f,0.612300f,0.707200f, 0.374742f,0.427682f},
{ -0.269805f,0.155775f,1.287345f, -0.617700f,0.356600f,0.700900f, 0.427682f,0.374742f},
{ -0.311540f,0.000000f,1.287345f, -0.707000f,0.000000f,0.707200f, 0.500000f,0.355365f},
{ -0.269805f,-0.155775f,1.287345f, -0.617700f,-0.356600f,0.700900f, 0.572318f,0.374742f},
{ -0.155770f,-0.269810f,1.287345f, -0.353500f,-0.612300f,0.707200f, 0.625258f,0.427682f},
{ 0.000000f,-0.168610f,1.380070f, 0.000000f,-0.385700f,0.922600f, 0.578276f,0.500000f},
{ 0.146015f,-0.084305f,1.380070f, 0.334000f,-0.192800f,0.922600f, 0.539138f,0.567789f},
{ 0.146015f,0.084305f,1.380070f, 0.334000f,0.192800f,0.922600f, 0.460862f,0.567789f},
{ 0.000000f,0.168610f,1.380070f, 0.000000f,0.385700f,0.922600f, 0.421724f,0.500000f},
{ -0.146015f,0.084305f,1.380070f, -0.334000f,0.192800f,0.922600f, 0.460862f,0.432211f},
{ -0.146015f,-0.084305f,1.380070f, -0.334000f,-0.192800f,0.922600f, 0.539138f,0.432211f},
{ 0.000000f,0.000000f,1.412630f, 0.000000f,0.000000f,1.000000f, 0.500000f,0.500000f},
{ 0.237500f,-0.411375f,0.129865f, 0.497700f,-0.862000f,-0.096000f, 0.879719f,0.719231f},
{ 0.000000f,-0.475015f,0.129865f, 0.000000f,-0.995400f,-0.096000f, 0.938461f,0.500000f},
{ 0.411360f,-0.237505f,0.129865f, 0.862000f,-0.497700f,-0.096000f, 0.719231f,0.879719f},
{ 0.475000f,0.000000f,0.129865f, 0.995400f,0.000000f,-0.096000f, 0.500000f,0.938461f},
{ 0.411360f,0.237505f,0.129865f, 0.862000f,0.497700f,-0.096000f, 0.280769f,0.879719f},
{ 0.237500f,0.411375f,0.129865f, 0.497700f,0.862000f,-0.096000f, 0.120281f,0.719231f},
{ 0.000000f,0.475015f,0.129865f, 0.000000f,0.995400f,-0.096000f, 0.061539f,0.500000f},
{ -0.237500f,0.411375f,0.129865f, -0.497700f,0.862000f,-0.096000f, 0.120281f,0.280769f},
{ -0.411360f,0.237505f,0.129865f, -0.862000f,0.497700f,-0.096000f, 0.280769f,0.120281f},
{ -0.475000f,0.000000f,0.129865f, -0.995400f,0.000000f,-0.096000f, 0.500000f,0.061539f},
{ -0.411360f,-0.237505f,0.129865f, -0.862000f,-0.497700f,-0.096000f, 0.719231f,0.120281f},
{ -0.237500f,-0.411375f,0.129865f, -0.497700f,-0.862000f,-0.096000f, 0.879719f,0.280769f},
{ 0.220295f,-0.381570f,-0.012635f, 0.486000f,-0.841800f,-0.234800f, 0.926171f,0.746050f},
{ 0.000000f,-0.440600f,-0.012635f, 0.000000f,-0.972100f,-0.234800f, 0.992100f,0.500000f},
{ 0.381560f,-0.220300f,-0.012635f, 0.841800f,-0.486000f,-0.234700f, 0.746050f,0.926171f},
{ 0.440585f,0.000000f,-0.012635f, 0.972100f,-0.000000f,-0.234700f, 0.500000f,0.992100f},
{ 0.381560f,0.220300f,-0.012635f, 0.841800f,0.486000f,-0.234700f, 0.253950f,0.926171f},
{ 0.220295f,0.381570f,-0.012635f, 0.486000f,0.841800f,-0.234800f, 0.073829f,0.746050f},
{ 0.000000f,0.440600f,-0.012635f, 0.000000f,0.972100f,-0.234800f, 0.007900f,0.500000f},
{ -0.220295f,0.381570f,-0.012635f, -0.486000f,0.841800f,-0.234800f, 0.073829f,0.253950f},
{ -0.381560f,0.220300f,-0.012635f, -0.841800f,0.486000f,-0.234700f, 0.253950f,0.073829f},
{ -0.440585f,0.000000f,-0.012635f, -0.972100f,0.000000f,-0.234700f, 0.500000f,0.007900f},
{ -0.381560f,-0.220300f,-0.012635f, -0.841800f,-0.486000f,-0.234700f, 0.746050f,0.073829f},
{ -0.220295f,-0.381570f,-0.012635f, -0.486000f,-0.841800f,-0.234800f, 0.926171f,0.253950f}
};

const WORD bulbLightIndices[360]=
{
44, 56, 55,
56, 44, 66,
55, 43, 44,
43, 55, 45,
57, 45, 55,
45, 57, 58,
43, 0, 44,
45, 0, 43,
54, 66, 44,
58, 46, 45,
66, 54, 53,
53, 65, 66,
65, 53, 64,
46, 58, 47,
59, 47, 58,
47, 59, 60,
46, 6, 45,
47, 6, 46,
5, 45, 6,
0, 45, 5,
60, 48, 47,
5, 4, 0,
6, 4, 5,
48, 60, 49,
61, 49, 60,
49, 61, 62,
48, 10, 47,
49, 10, 48,
6, 47, 9,
9, 47, 10,
9, 8, 6,
10, 8, 9,
8, 7, 6,
6, 7, 4,
10, 11, 8,
7, 27, 4,
8, 27, 7,
12, 11, 10,
11, 29, 8,
12, 29, 11,
8, 28, 27,
29, 28, 8,
13, 12, 10,
10, 49, 13,
29, 38, 28,
28, 38, 27,
13, 49, 14,
14, 12, 13,
50, 14, 49,
62, 50, 49,
50, 62, 51,
51, 14, 50,
63, 51, 62,
51, 63, 64,
64, 52, 51,
52, 64, 53,
52, 18, 51,
53, 18, 52,
14, 51, 17,
17, 51, 18,
17, 16, 14,
18, 16, 17,
14, 15, 12,
16, 15, 14,
15, 31, 12,
16, 31, 15,
31, 30, 12,
12, 30, 29,
30, 39, 29,
31, 39, 30,
38, 29, 39,
16, 32, 31,
40, 39, 31,
32, 40, 31,
42, 38, 39,
42, 39, 40,
33, 32, 16,
33, 40, 32,
19, 33, 16,
18, 19, 16,
33, 41, 40,
41, 42, 40,
20, 33, 19,
20, 19, 18,
34, 41, 33,
20, 34, 33,
35, 41, 34,
35, 34, 20,
41, 36, 42,
41, 35, 36,
38, 42, 37,
37, 42, 36,
37, 27, 38,
27, 37, 26,
27, 26, 4,
26, 37, 24,
4, 26, 24,
36, 24, 37,
4, 24, 3,
4, 3, 0,
24, 36, 25,
25, 36, 35,
3, 24, 1,
24, 25, 1,
0, 3, 1,
1, 25, 35,
0, 1, 2,
0, 2, 44,
1, 35, 23,
23, 35, 20,
22, 2, 1,
1, 23, 22,
22, 44, 2,
22, 23, 20,
44, 22, 54,
54, 22, 53,
22, 20, 21,
21, 53, 22,
21, 20, 18,
18, 53, 21
};