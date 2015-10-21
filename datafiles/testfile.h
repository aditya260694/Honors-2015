#define __attribute__(x)

#define av_const __attribute__((const))
#ifndef global3
av_const float global3(unsigned v);
#endif

typedef struct SampleStruct2
{
	int x;
	int y;
	struct {
		float z;
	}d;
}SampleStruct2;
