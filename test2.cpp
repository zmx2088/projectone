#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	cout << "============= Huffman�ļ�ѹ�� =============" << endl;
	cout << "�������ļ���:";
	char filename[256];
	cin >> filename;
	int weight[256] = { 0 };
	//����������ʽ���ļ�
	FILE* in = fopen(filename, "rb");
	//ɨ���ļ����Ȩ��
	int ch;
	while ((ch = getc(in)) != EOF) {
		weight[ch]++;
	}
	fclose(in);

	//��ʾ256���ֽڳ��ִ���
	cout << "Byte " << "Weight" << endl;
	for (int i = 0; i < 256; i++)
	{
		printf("0x%02X %d\n", i, weight[i]);
	}
	return 0;

}
