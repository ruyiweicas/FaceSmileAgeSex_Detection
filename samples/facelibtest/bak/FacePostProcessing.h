#ifndef  FACE_POST_PROCESSING_H
#define FACE_POST_PROCESSING_H

void FaceID_PostProcessing(int *Result_FaceID, float *Result_Prob_FaceID, int *Face_Valid_Flag, int nface_num);
void FaceID_PostProcessing(Human_Attribute *FaceRecognitionResult, int *Face_Valid_Flag, int nface_num);

void WriteProfilingFile(char *lpFilename);

#endif
