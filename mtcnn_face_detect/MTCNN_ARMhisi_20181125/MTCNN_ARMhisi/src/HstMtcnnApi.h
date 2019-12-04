
#ifndef _HSTMTCNNAPI_H_
#define _HSTMTCNNAPI_H_

#define MAX_FACE_NUM			10
#define MTCNN_MODEL_PATH_NAME	"./models/"

#define __FOR_ARM_DEBUG__     
//#define __FOR_UBUNTU_DEBUG_

typedef struct
{
	char FileName[MAX_FACE_NUM][128];   /**����ļ�������Ϊ���**/
	char PathName[128];      			/**���Ŀ¼����Ϊ����**/
	unsigned char FaceNum;   			/**������ͼ����**/
}MTCNN_OUT_IMAGE_S;


/******************************************************** 
Function:	 MTCNN_FaceNumDetect	
Description: ���������
Input:	ps8ImagePath   ��Ҫ�����������ͼƬ���ڵ�Ŀ¼
OutPut: pu8FaceNum     �������������Ŀ
Return: �������н����0Ϊ�ɹ�����0Ϊ�쳣
Others:
Author: Caibiao Lee
Date:	2018-10-25
*********************************************************/
int MTCNN_FaceNumDetect(char * ps8ImagePath, unsigned char *pu8FaceNum);



/******************************************************** 
Function:	 MTCNN_FaceCutOut	
Description: ��ͼƬ��ʶ�𵽵�����ȫ����ȡ���������Ϊ8������
Input:	ps8ImagePath   ��Ҫ�����������ͼƬ���ڵ�Ŀ¼
OutPut: OutImge     ������ȡ������Ϣ
Return: �������н����0Ϊ�ɹ�����0Ϊ�쳣
Others: ���øú�����Ҫ����PathName����ָ�����Ŀ¼,
		ֻ��ҪĿ¼������Ҫ����
Author: Caibiao Lee
Date:	2018-10-20
*********************************************************/
int MTCNN_FaceCutOut(char *ps8ImagePath, MTCNN_OUT_IMAGE_S *OutImge);

#endif

