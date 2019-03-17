#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

#define DECLSPEC_EXPORT __declspec(dllexport)
#define WINAPI __stdcall

char gName[64];

char gPieceBitmap[8][4][4][4] =
{
	// NULL
	{
		{
			{0},
		},
	},
	// O
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
	},
	// I
	{
		{
			{0, 0, 0, 0},
			{1, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
		},
		{
			{0, 0, 0, 0},
			{1, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
		},
	},
	// S
	{
		{
			{0, 0, 0, 0},
			{0, 0, 1, 1},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 0, 1, 1},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 1},
			{0, 0, 0, 0},
		},
	},
	// Z
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 1},
			{0, 0, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 0},
			{0, 1, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 1},
			{0, 0, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
	},
	// L
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 1},
			{0, 1, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 0, 1},
			{0, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 1, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
	},
	// J
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 1},
			{0, 0, 0, 1},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 1, 0, 0},
			{0, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 0, 0},
		},
	},
	// T
	{
		{
			{0, 0, 0, 0},
			{0, 1, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 0, 1, 1},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 1, 1, 1},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		},
		{
			{0, 0, 1, 0},
			{0, 1, 1, 0},
			{0, 0, 1, 0},
			{0, 0, 0, 0},
		},
	},
};

#ifdef __cplusplus
extern "C" {
#endif

	// AI�̸� ǥ�ø� ���� ����
	// ������ �й����� �� ��.
	DECLSPEC_EXPORT
		char* WINAPI Name()
	{
		strcpy(gName, "2013112018");
		return gName;
	}

	/*
	 * board�� boardW*boardH�� ������ ���ڿ��� �̷���� �ִ�.
	 * ���� ���, 8*3ũ���� ��죺
	 * 00000000
	 * 00011001
	 * 01111111
	 * board�� ������ ���� �־����� ��"011111110001100100000000".
	 * ������ �߰� ����
	 * curPiece�� ���� ������� "OISZLJT" �� �ϳ��� ���ڿ��� �־�����.
	 * nextPiece�� �̸����⸦ ����� ��� OISZLJT �� �ϳ��� �׷��� ���� ��� ������ �־�����.
	 * curR�� ���� ���� ������ ��Ÿ���� 1�� �ʱ� ���⣬2�� 90�� ȸ����3��180�� ȸ����4�� 270�� ȸ���� ���̴�.
	   �迭 �ε����� (1,2) �� �������� �Ѵ�
	 * curX,curY�� 4*4 ������ 1, 2�� ��ġ�� �������� ���� ���� ��ġ�� ��Ÿ���� ��ǥ���̴�.
	 *		board���� x=1,y=1�� ���� �ϴ�,
	 *		board���� x=boardW,y=1�� ������ �ϴ�,
	 *		board���� x=1,y=boardH�� ���� ����̴�.
	 *		���丮�� pieces_orientations.jpg ���� ����.
	 *		�⺻ �ʱ� ��ġ�� curY==boardH-1, curX==boardW/2+1�̴�.
	 *
	 * bestX,bestRotation �� �����ϸ� �ȴ�. (curX,curR�� ���� ��Ģ�� ����)
	 *
	 * ����ȸ���� ���� �̷������ ���� x��ǥ�� �̵��� �� ����Ʈ����.
	 *		�� �Լ��� ��ϴ� 1ȸ ȣ�� �ȴ�.
	 */
	int AI(int boardW, int boardH,
		char board[],
		char curPiece,
		int curX, int curY,
		int curR,
		char nextPiece,
		int* bestX, int* bestRotation)
	{
		char tempboard[21][11] = { 0, }; //�������� NULL�� �ʱ�ȭ
		int count = 0;
		int i;
		int j;
		int check = 0; //ó���� ���� �ѹ� �ֱ����� ����
		char tempcurPiece[4][4]; //������ ����� �ӽ÷� ������ �迭�� ����
		int countL = 0; //������ ���̸� ī��Ʈ
		int tempL = 0; //������ ���̸� �ӽ÷� ����
		int checkX = 0;//������ ó�� 1�� ��Ÿ���� ����
		int tempH = 0; //���� �ӽ� ���尪
		int tempC = 0; //���� ��ŭ ������ ���� ���� ����
		int countC; //���� ��ŭ ���� ĭ�� ���� ���� ����
		int smallC = 0; //�� ������ �ִ� ��ĭ�� ����
		int saveX; //�ְ��� x��ǥ�� ����
		int saveR; //�ְ��� R�� ����
		int tempXX; //x�� ��ǥ �̵��� �ʿ��� ����
		int CurrentCC = 0; //���� ���� ���ϴ� ����
		int bigCC = 0; //���� ���ϴ� �ְ��� ����
		int countCC; //���ϴ� ������ �������� �ӽ� ����
		int tempYY = 0; //y��ǥ �ӽ� ����
		int bottom = 0; //�� �ؿ� ���ϴ� �ְ��� ����
		int bottomCC = 0; //���� �� �ؿ� ���ϴ� ����
		for (i = boardH; i >= 1; i--)
		{
			for (j = 1; j <= boardW; j++)
			{
				tempboard[i][j] = board[count++]; //�� ����
			}
		}
		curX = curX - 2; //x��ǥ�� ������ �迭�� �� ù��° �ε����� �̵���Ű�� ���� ����
		while (1)
		{//y��ǥ�� ó�� ��ġ���� x��ǥ�� �̵���Ű�鼭 ������ ������ �ְ��� ��ġ�� ã�°� ����
			curY = 19; //y��ǥ�� ó���� 19�̱� ������
			//y��ǥ�� ������ �迭�� �� ù��° �ε����� �̵���Ű�� ���� ����
			curY = boardH - curY + 1;
			curY = curY - 1;
			count = 0;
			//���ڿ� ���缭 ���� ����
			//curR�� ó���� 1�̱� ������ ������ �迭�� ������ 0���� �����ϱ⶧���� curR-1
			if (curPiece == 'O')
			{
				for (i = 0; i < 4; i++)
					for (j = 0; j < 4; j++)
						tempcurPiece[i][j] = gPieceBitmap[1][curR - 1][i][j];
			}
			else if (curPiece == 'I')
			{
				for (i = 0; i < 4; i++)
					for (j = 0; j < 4; j++)
						tempcurPiece[i][j] = gPieceBitmap[2][curR - 1][i][j];
			}
			else if (curPiece == 'S')
			{
				for (i = 0; i < 4; i++)
					for (j = 0; j < 4; j++)
						tempcurPiece[i][j] = gPieceBitmap[3][curR - 1][i][j];
			}
			else if (curPiece == 'Z')
			{
				for (i = 0; i < 4; i++)
					for (j = 0; j < 4; j++)
						tempcurPiece[i][j] = gPieceBitmap[4][curR - 1][i][j];
			}
			else if (curPiece == 'L')
			{
				for (i = 0; i < 4; i++)
					for (j = 0; j < 4; j++)
						tempcurPiece[i][j] = gPieceBitmap[5][curR - 1][i][j];
			}
			else if (curPiece == 'J')
			{
				for (i = 0; i < 4; i++)
					for (j = 0; j < 4; j++)
						tempcurPiece[i][j] = gPieceBitmap[6][curR - 1][i][j];

			}
			else if (curPiece == 'T')
			{
				for (i = 0; i < 4; i++)
					for (j = 0; j < 4; j++)
						tempcurPiece[i][j] = gPieceBitmap[7][curR - 1][i][j];
			}
			count = 0;
			while (1) //curx�� ���������� �̵�
			{
				for (i = curY; i < curY + 4; i++)
				{
					for (j = curX; j < curX + 4; j++)
					{
						//���峻�� �����ϴ��� �Ǵ�
						if (tempboard[i][j] == 0 && tempcurPiece[i - curY][j - curX] == 1)
							break;
						else
						{
							//�浹�� �Ͼ���� �Ǵ�
							if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
								count++; //�浹�� �Ͼ�� �ʴ� ��� ī��Ʈ
						}
					}
				}
				if (count == 4)
				{
					//���� �ƹ� �̻���� ī��Ʈ �Ǿ��� ���
					curX--; //x��ǥ�� ���� ������ �̵���Ų��
					if (tempXX == curX) //x��ǥ�� ���������� �̵���Ű�� ���� ����
					{
						curX++;
						tempXX = curX;

						break;
					}
				}
				else
				{
					curX++;
					tempXX = curX; //tempXX�� ���� X��ǥ ����
					break;
				}
				count = 0;
			}
			count = 0; //ī��Ʈ �ʱ�ȭ
			while (1) //y�� ��ȭ
			{
				for (i = curY; i < curY + 4; i++)
				{
					for (j = curX; j < curX + 4; j++)
					{
						//���� ���� �ִ��� �Ǵ�
						if (tempboard[i][j] == 0 && tempcurPiece[i - curY][j - curX] == 1)
							break;
						else
						{ //���� ��ġ���� �Ǵ�
							if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
								count++;
						}
					}
				}
				if (count == 4) //���� �ƹ� �̻���� ī��Ʈ �� ���
					curY++;
				else
				{
					curY--;
					break;
				}
				count = 0;
			}
			countC = 0; //ī��Ʈ �ʱ�ȭ
			tempC = 0; //��� ������ ��ĭ�� ������ ���� ���� ���� �ʱ�ȭ
			for (i = curY; i < curY + 4; i++)
			{
				for (j = curX; j < curX + 4; j++)
				{
					if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
					{//����� ������ 0���� �ƴ��� �Ǵ��Ͽ� 0 �� ��� ī��Ʈ�� �Ѵ�
						if (tempboard[i + 1][j] == '0' && tempcurPiece[i - curY + 1][j - curX] == 0)
							countC++;
						if (tempcurPiece[i - curY][j - curX - 1] == 0)
							if (tempboard[i][j - 1] == '0')
								countC++;
						if (tempcurPiece[i - curY + 1][j - curX] == 0)
							if (tempboard[i + 1][j] == '0')
								countC++;
						if (tempcurPiece[i - curY][j - curX + 1] == 0)
							if (tempboard[i][j + 1] == '0')
								countC++;
					}
				}
			}
			tempC = countC; //��� ������ ��ĭ�� ����
			countL = 0;
			if (tempL == 0)
			{
				for (i = curY; i < curY + 4; i++) //����� ���� ���ϴ� �ݺ���
				{
					for (j = curX; j < curX + 4; j++)
					{
						if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
						{
							tempH = i - curY; //����
							if (checkX == 0 && countL == 0) //x��ǥ
								checkX = j - curX;
							else if (checkX > j)
								checkX = j - curX;
							if (tempcurPiece[i - curY + 1][j - curX] == 0)
							{// ���̸� ���ϴ� ����
								countL++;
								tempL = countL;
							}
						}
					}
				}
				if (tempL == 0)
					tempL = 1; //����� ����� ������ ����� ��� 
			}
			countC = 0;
			count = 0;
			for (i = checkX; i < checkX + tempL; i++)
			{//������ �� �عٴڿ� ���ϴ� ������ ���ϴ� �ݺ���
				if ((tempboard[curY + tempH][i + curX] == '0' && tempcurPiece[tempH][i] == 1) || (tempboard[curY + tempH][i + curX] == '1'&& tempcurPiece[tempH][i] == 0))
					count++;
			}
			bottomCC = count;
			CurrentCC = 0;
			countCC = 0;
			if (curR < 5)
				//curR�� 5�� ��� ȸ���� ����
			{  //���� curR -1�̶�� ���� ������ �װ� tempcurPiece�� ���������� 0~4 ���� �����ϱ⶧����
				if (smallC == 0 && check == 0) //���� �ѹ��� ���� �ȴ�
				{
					countCC = 0;
					for (i = curY; i < curY + 4; i++)
					{
						for (j = curX; j < curX + 4; j++)
						{ //��Ͽ� �󸶳� ���� ���ϴ��� �Ǵ��ϴ� �ݺ���
							if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
							{
								if (tempcurPiece[i - curY][j - curX - 1] == 0)
									if (tempboard[i][j - 1] == '1')
										countCC++;
								if (tempcurPiece[i - curY + 1][j - curX] == 0)
									if (tempboard[i + 1][j] == '1')
										countCC++;
								if (tempcurPiece[i - curY][j - curX + 1] == 0)
									if (tempboard[i][j + 1] == '1')
										countCC++;
							}
						}
					}
					bottom = bottomCC; //������ �� �عٴڿ� 1�� ����
					CurrentCC = countCC;
					smallC = tempC; //��� ���� 0�� ����
					bigCC = CurrentCC; //��Ͽ� �󸶳� ���� ���ϴ� ��
					saveX = curX; //x��ǥ ����
					saveR = curR;
					check++;
					curX++;
					tempYY = curY + tempH;
				}
				else if (tempYY <= curY + tempH)
				{//y��ǥ�� Ŭ���� ���̰� ����
					countCC = 0;
					for (i = curY; i < curY + 4; i++)
					{
						for (j = curX; j < curX + 4; j++)
						{//��Ͽ� �󸶳� ���� ���ϴ��� �Ǵ��ϴ� �ݺ���
							if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
							{
								if (tempcurPiece[i - curY][j - curX - 1] == 0)
									if (tempboard[i][j - 1] == '1')
										countCC++;
								if (tempcurPiece[i - curY + 1][j - curX] == 0)
									if (tempboard[i + 1][j] == '1')
										countCC++;
								if (tempcurPiece[i - curY][j - curX + 1] == 0)
									if (tempboard[i][j + 1] == '1')
										countCC++;
							}
						}
					}
					CurrentCC = countCC;
					if (smallC >= tempC) //�� ������ 0�� Ȯ��
					{
						if (CurrentCC > bigCC)
						{
							bigCC = CurrentCC; //���� ���� ����
							if (bottom <= bottomCC)
							{
								smallC = tempC;
								bottom = bottomCC;
								tempYY = curY + tempH;
								saveX = curX; //�ְ��� x��ǥ ����
								saveR = curR; //�ְ��� ȸ�� ���� ����
							}
							else
							{

								if (smallC >= tempC && CurrentCC > bottom || CurrentCC > bigCC)
								{ //��� �ٴڿ� 0�� ���� ������ �۰� 
									//���� ���ϴ� ������ ���� ����� �ٴ��� 1�� �������� ũ�ų�
									//���� ���ϴ� ������ ������ ���ϴ� �������� Ŭ ���
									smallC = tempC;
									bottom = bottomCC;
									bigCC = CurrentCC;
									tempYY = curY + tempH;
									saveX = curX;
									saveR = curR;
								}
							}
						}
						else
						{ //���� ���ϴ� ������ ������ ���ϴ� �������� ���� ���
							if (bottom < bottomCC && smallC >= tempC)
							{//���� ����� �� �ٴ��� ���ϴ� ������ ���������� Ŀ���Ѵ�
								bottom = bottomCC;
								bigCC = CurrentCC;
								smallC = tempC;
								tempYY = curY + tempH;
								saveX = curX;
								saveR = curR;

							}
							else
							{ //�ٴ��� ������ �������� Ŭ ���
								if (smallC >= tempC || CurrentCC > bottom)
								{ //��� �ٴ��� 0�� ������ ���������� �۰�, ���� ���ϴ� ������ ����� �ٴ��� 1�� ������ Ŀ���Ѵ�
									bigCC = CurrentCC;
									bottom = bottomCC;
									smallC = tempC;
									tempYY = curY + tempH;
									saveX = curX;
									saveR = curR;
								}
							}
						}
					}

				}
				curX++; //x��ǥ ����
				if (curX + tempL > 10)
				{
					/*������ ���� ���̿� x��ǥ�� ���� 10�� �Ǹ�
					�� ���Ҵٰ� �Ǵ��Ѵ�*/
					curX = 4; //x��ǥ�� ó�� ��ġ�� 4���� �����Ѵ�.
					curR++; //��� ���� ����
					checkX = 0; //������ ���鼭 �ٽ� x��ǥ�� ���ؾߵȴ�
					tempL = 0; //������ ���鼭 �ٽ� ���̸� ���ؾ��Ѵ�
				}
			}
			else if (curR == 5)
			{//ȸ�� ������ 5�� ���, �� tempcurPiece�� ������ 4�̴�.
				*bestX = saveX + 2;  //x��ǥ�� ������� ���´�
				*bestRotation = saveR;
				curR = 1;
				curX = curX + 2;
				break;
			}
		}
		return 0;
	}

	/*
	 * path�� �����ϴ� ��ɾ ���� ����
	 *      'l': �� ĭ �������� �̵�
	 *      'r': �� ĭ ���������� �̵�
	 *      'd': �� ĭ �Ʒ��� �̵�
	 *      'L': ������ ���� �������� �̵�
	 *      'R': ������ ���� ���������� �̵�
	 *      'D': ������ ���� �Ʒ��� �̵����� �� �߰� �̵� ���ɣ�
	 *      'z': �� �ð�������� ȸ��
	 *      'c': �ð�������� ȸ��
	 * path ���ڿ� ����'\0'�� �ϵ� ������ ��Ÿ����.
	 *
	 * ���� ��ɾ �̿��Ͽ� ������ �̵��� �����ϸ� �Ʒ��� ��ü �ڵ带 �����Ͽ��� �Ѵ�.
	 */
	DECLSPEC_EXPORT
		int WINAPI AIPath(int boardW, int boardH,
			char board[],
			char curPiece,
			int curX, int curY,
			int curR,
			char nextPiece,
			char path[])
	{
		//if (0)
		{
			int bestX = 0;
			int bestRotation = 1;
			AI(boardW, boardH,
				board,
				curPiece,
				curX, curY,
				curR,
				nextPiece,
				&bestX, &bestRotation
			);
			while (curR != bestRotation)
			{
				strcat(path, "z");
				curR = curR % 4 + 1;
			}
			while (curX > bestX)
			{
				strcat(path, "l");
				curX -= 1;
			}
			while (curX < bestX)
			{
				strcat(path, "r");
				curX += 1;
			}
			}
		//strcpy(path, "ddddddddddcccrrrrrrDL");
		return 0;
		}

#ifdef __cplusplus
	}
#endif
