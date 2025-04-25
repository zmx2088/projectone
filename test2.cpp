#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	cout << "============= Huffman文件压缩 =============" << endl;
	cout << "请输入文件名:";
	char filename[256];
	cin >> filename;
	int weight[256] = { 0 };
	//二进制流形式打开文件
	FILE* in = fopen(filename, "rb");
	//扫描文件获得权重
	int ch;
	while ((ch = getc(in)) != EOF) {
		weight[ch]++;
	}
	fclose(in);

	//显示256种字节出现次数
	cout << "Byte " << "Weight" << endl;
	for (int i = 0; i < 256; i++)
	{
		printf("0x%02X %d\n", i, weight[i]);
	}
	return 0;

}
