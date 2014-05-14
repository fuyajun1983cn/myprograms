#ifndef CUBE_DATA_H
#define CUBE_DATA_H

static const GLfloat gCubeVertices[] = {
	-0.5	,-0.5	,0.5,
	0.5 ,-0.5	,0.5,
	0.5 ,0.5	,0.5,
	0.5 ,0.5	,0.5,
	-0.5	,0.5	,0.5,
	-0.5	,-0.5	,0.5,
	0.5 ,0.5	,-0.5,
	0.5 ,-0.5	,-0.5,
	-0.5	,-0.5	,-0.5,
	-0.5	,-0.5	,-0.5,
	-0.5	,0.5	,-0.5,
	0.5 ,0.5	,-0.5,
	-0.5	,0.5	,-0.5,
	-0.5	,0.5	,0.5,
	0.5 ,0.5	,-0.5,
	0.5 ,0.5	,-0.5,
	-0.5	,0.5	,0.5,
	0.5 ,0.5	,0.5,
	0.5 ,-0.5	,-0.5,
	-0.5	,-0.5	,0.5,
	-0.5	,-0.5	,-0.5,
	0.5 ,-0.5	,0.5,
	-0.5	,-0.5	,0.5,
	0.5 ,-0.5	,-0.5,
	0.5 ,0.5	,-0.5,
	0.5 ,0.5	,0.5,
	0.5 ,-0.5	,0.5,
	0.5 ,-0.5	,0.5,
	0.5 ,-0.5	,-0.5,
	0.5 ,0.5	,-0.5,
	-0.5	,-0.5	,0.5,
	-0.5	,0.5	,0.5,
	-0.5	,0.5	,-0.5,
	-0.5	,0.5	,-0.5,
	-0.5	,-0.5	,-0.5,
	-0.5	,-0.5	,0.5,
};

static const GLfloat gCubeNormals[] = {
	-0.57735026 ,-0.57735026	,0.57735026,
	1	,0.57735026 ,-0.57735026,
	0.57735026	,1	,0.57735026,
	0.57735026	,0.57735026 ,1,
	0.57735026	,0.57735026 ,0.57735026,
	1	,-0.57735026	,0.57735026,
	0.57735026	,1	,-0.57735026,
	-0.57735026 ,0.57735026 ,1,
	0.57735026	,0.57735026 ,-0.57735026,
	1	,0.57735026 ,-0.57735026,
	-0.57735026 ,1	,-0.57735026,
	-0.57735026 ,-0.57735026	,1,
	-0.57735026 ,-0.57735026	,-0.57735026,
	1	,-0.57735026	,0.57735026,
	-0.57735026 ,1	,0.57735026,
	0.57735026	,-0.57735026	,1,
	-0.57735026 ,0.57735026 ,-0.57735026,
	1	,-0.57735026	,0.57735026,
	0.57735026	,1	,0.57735026,
	0.57735026	,-0.57735026	,1,
	0.57735026	,0.57735026 ,-0.57735026,
	1	,-0.57735026	,0.57735026,
	0.57735026	,1	,0.57735026,
	0.57735026	,0.57735026 ,1,
	0.57735026	,-0.57735026	,-0.57735026,
	1	,-0.57735026	,-0.57735026,
	0.57735026	,1	,-0.57735026,
	-0.57735026 ,-0.57735026	,1,
	0.57735026	,-0.57735026	,0.57735026,
	1	,-0.57735026	,-0.57735026,
	0.57735026	,1	,0.57735026,
	-0.57735026 ,-0.57735026	,1,
	0.57735026	,0.57735026 ,-0.57735026,
	1	,0.57735026 ,0.57735026,
	0.57735026	,1	,0.57735026,
	-0.57735026 ,0.57735026 ,1,
};

static const int CUBE_VETEX_COUNT = sizeof(gCubeVertices)/(3*sizeof(GLfloat));

#endif