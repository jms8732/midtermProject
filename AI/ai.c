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

	// AI이름 표시를 위해 지정
	// 본인의 학번으로 할 것.
	DECLSPEC_EXPORT
		char* WINAPI Name()
	{
		strcpy(gName, "2013112018");
		return gName;
	}

	/*
	 * board는 boardW*boardH의 길이의 문자열로 이루어져 있다.
	 * 예를 들어, 8*3크기의 경우：
	 * 00000000
	 * 00011001
	 * 01111111
	 * board에 다음과 같이 주어진다 ："011111110001100100000000".
	 * 구현시 추가 점수
	 * curPiece는 블럭의 모양으로 "OISZLJT" 중 하나의 문자열이 주어진다.
	 * nextPiece는 미리보기를 사용할 경우 OISZLJT 중 하나가 그렇지 않을 경우 공백이 주어진다.
	 * curR은 현재 블럭의 방향을 나타내며 1이 초기 방향，2는 90도 회전，3는180도 회전，4는 270도 회전된 것이다.
	   배열 인덱스로 (1,2) 의 기준으로 한다
	 * curX,curY는 4*4 블럭에서 1, 2의 위치를 기준으로 블럭의 현재 위치를 나타내는 좌표값이다.
	 *		board에서 x=1,y=1은 왼쪽 하단,
	 *		board에서 x=boardW,y=1은 오른쪽 하단,
	 *		board에서 x=1,y=boardH은 왼쪽 상단이다.
	 *		디렉토리에 pieces_orientations.jpg 파일 참고.
	 *		기본 초기 위치는 curY==boardH-1, curX==boardW/2+1이다.
	 *
	 * bestX,bestRotation 을 지정하면 된다. (curX,curR과 같은 규칙을 따름)
	 *
	 * 참고：회전이 먼저 이루어지며 이후 x좌표를 이동한 후 떨어트린다.
	 *		이 함수는 블록당 1회 호출 된다.
	 */
	int AI(int boardW, int boardH,
		char board[],
		char curPiece,
		int curX, int curY,
		int curR,
		char nextPiece,
		int* bestX, int* bestRotation)
	{
		char tempboard[21][11] = { 0, }; //보드판을 NULL로 초기화
		int count = 0;
		int i;
		int j;
		int check = 0; //처음에 값을 한번 넣기위한 변수
		char tempcurPiece[4][4]; //도형의 모양을 임시로 이차원 배열로 저장
		int countL = 0; //도형의 길이를 카운트
		int tempL = 0; //도형의 길이를 임시로 저장
		int checkX = 0;//도형의 처음 1이 나타나는 지점
		int tempH = 0; //높이 임시 저장값
		int tempC = 0; //블럭이 얼만큼 들어가는지 위한 갯수 변수
		int countC; //블럭이 얼마큼 들어가는 칸을 세기 위한 변수
		int smallC = 0; //블럭 주위에 있는 빈칸의 개수
		int saveX; //최고의 x좌표를 저장
		int saveR; //최고의 R를 저장
		int tempXX; //x의 좌표 이동에 필요한 변수
		int CurrentCC = 0; //현재 블럭에 접하는 개수
		int bigCC = 0; //블럭에 접하는 최고의 개수
		int countCC; //접하는 개수를 세기위한 임시 변수
		int tempYY = 0; //y좌표 임시 변수
		int bottom = 0; //블럭 밑에 접하는 최고의 개수
		int bottomCC = 0; //현재 블럭 밑에 접하는 개수
		for (i = boardH; i >= 1; i--)
		{
			for (j = 1; j <= boardW; j++)
			{
				tempboard[i][j] = board[count++]; //판 복사
			}
		}
		curX = curX - 2; //x좌표를 이차원 배열의 맨 첫번째 인덱스로 이동시키기 위한 과정
		while (1)
		{//y좌표는 처음 위치에서 x좌표를 이동시키면서 도형을 돌리고 최고의 위치를 찾는게 원리
			curY = 19; //y좌표가 처음에 19이기 때문에
			//y좌표를 이차원 배열의 맨 첫번째 인덱스로 이동시키기 위한 과정
			curY = boardH - curY + 1;
			curY = curY - 1;
			count = 0;
			//글자에 맞춰서 형태 복사
			//curR이 처음에 1이기 떄문에 이차원 배열의 방향은 0부터 시작하기때문에 curR-1
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
			while (1) //curx를 오른쪽으로 이동
			{
				for (i = curY; i < curY + 4; i++)
				{
					for (j = curX; j < curX + 4; j++)
					{
						//보드내에 존재하는지 판단
						if (tempboard[i][j] == 0 && tempcurPiece[i - curY][j - curX] == 1)
							break;
						else
						{
							//충돌이 일어나는지 판단
							if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
								count++; //충돌이 일어나지 않는 경우 카운트
						}
					}
				}
				if (count == 4)
				{
					//블럭이 아무 이상없이 카운트 되었을 경우
					curX--; //x좌표를 좌측 끝으로 이동시킨다
					if (tempXX == curX) //x좌표를 오른쪽으로 이동시키기 위한 조건
					{
						curX++;
						tempXX = curX;

						break;
					}
				}
				else
				{
					curX++;
					tempXX = curX; //tempXX에 현재 X좌표 삽입
					break;
				}
				count = 0;
			}
			count = 0; //카운트 초기화
			while (1) //y값 변화
			{
				for (i = curY; i < curY + 4; i++)
				{
					for (j = curX; j < curX + 4; j++)
					{
						//보드 내에 있는지 판단
						if (tempboard[i][j] == 0 && tempcurPiece[i - curY][j - curX] == 1)
							break;
						else
						{ //블럭이 겹치는지 판단
							if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
								count++;
						}
					}
				}
				if (count == 4) //블럭이 아무 이상없이 카운트 될 경우
					curY++;
				else
				{
					curY--;
					break;
				}
				count = 0;
			}
			countC = 0; //카운트 초기화
			tempC = 0; //블록 주위의 빈칸의 개수를 세기 위한 변수 초기화
			for (i = curY; i < curY + 4; i++)
			{
				for (j = curX; j < curX + 4; j++)
				{
					if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
					{//블록이 주위에 0인지 아닌지 판단하여 0 일 경우 카운트를 한다
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
			tempC = countC; //블록 주위의 빈칸의 개수
			countL = 0;
			if (tempL == 0)
			{
				for (i = curY; i < curY + 4; i++) //블록의 길이 구하는 반복문
				{
					for (j = curX; j < curX + 4; j++)
					{
						if (tempboard[i][j] == '0' && tempcurPiece[i - curY][j - curX] == 1)
						{
							tempH = i - curY; //높이
							if (checkX == 0 && countL == 0) //x좌표
								checkX = j - curX;
							else if (checkX > j)
								checkX = j - curX;
							if (tempcurPiece[i - curY + 1][j - curX] == 0)
							{// 길이를 구하는 조건
								countL++;
								tempL = countL;
							}
						}
					}
				}
				if (tempL == 0)
					tempL = 1; //막대기 모양이 세워진 모양일 경우 
			}
			countC = 0;
			count = 0;
			for (i = checkX; i < checkX + tempL; i++)
			{//도형의 맨 밑바닥에 접하는 개수를 구하는 반복문
				if ((tempboard[curY + tempH][i + curX] == '0' && tempcurPiece[tempH][i] == 1) || (tempboard[curY + tempH][i + curX] == '1'&& tempcurPiece[tempH][i] == 0))
					count++;
			}
			bottomCC = count;
			CurrentCC = 0;
			countCC = 0;
			if (curR < 5)
				//curR가 5일 경우 회전을 다함
			{  //위에 curR -1이라고 적혀 있지만 그건 tempcurPiece의 도형방향이 0~4 부터 시작하기때문에
				if (smallC == 0 && check == 0) //최초 한번만 들어가면 된다
				{
					countCC = 0;
					for (i = curY; i < curY + 4; i++)
					{
						for (j = curX; j < curX + 4; j++)
						{ //블록에 얼마나 많이 접하는지 판단하는 반복문
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
					bottom = bottomCC; //도형의 맨 밑바닥에 1의 개수
					CurrentCC = countCC;
					smallC = tempC; //블록 주위 0의 개수
					bigCC = CurrentCC; //블록에 얼마나 많이 접하는 지
					saveX = curX; //x좌표 저장
					saveR = curR;
					check++;
					curX++;
					tempYY = curY + tempH;
				}
				else if (tempYY <= curY + tempH)
				{//y좌표가 클수록 높이가 낮다
					countCC = 0;
					for (i = curY; i < curY + 4; i++)
					{
						for (j = curX; j < curX + 4; j++)
						{//블록에 얼마나 많이 접하는지 판단하는 반복문
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
					if (smallC >= tempC) //블럭 주위의 0을 확인
					{
						if (CurrentCC > bigCC)
						{
							bigCC = CurrentCC; //현재 값을 저장
							if (bottom <= bottomCC)
							{
								smallC = tempC;
								bottom = bottomCC;
								tempYY = curY + tempH;
								saveX = curX; //최고의 x좌표 저장
								saveR = curR; //최고의 회전 방향 저장
							}
							else
							{

								if (smallC >= tempC && CurrentCC > bottom || CurrentCC > bigCC)
								{ //블록 바닥에 0이 이전 값보다 작고 
									//현재 접하는 갯수가 이전 블록의 바닥의 1의 갯수보다 크거나
									//현재 접하는 갯수가 이전에 접하는 갯수보다 클 경우
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
						{ //현재 접하는 개수가 이전에 접하는 개수보다 적을 경우
							if (bottom < bottomCC && smallC >= tempC)
							{//현재 블록의 밑 바닥의 접하는 개수가 이전값보다 커야한다
								bottom = bottomCC;
								bigCC = CurrentCC;
								smallC = tempC;
								tempYY = curY + tempH;
								saveX = curX;
								saveR = curR;

							}
							else
							{ //바닥의 갯수가 이전값이 클 경우
								if (smallC >= tempC || CurrentCC > bottom)
								{ //블록 바닥의 0의 갯수가 이전값보다 작고, 현재 접하는 갯수가 블록의 바닥의 1의 갯수가 커야한다
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
				curX++; //x좌표 증가
				if (curX + tempL > 10)
				{
					/*도형의 가로 길이와 x좌표의 합이 10이 되면
					다 돌았다고 판단한다*/
					curX = 4; //x좌표는 처음 위치인 4부터 시작한다.
					curR++; //블록 방향 증가
					checkX = 0; //도형이 돌면서 다시 x좌표를 구해야된다
					tempL = 0; //도형이 돌면서 다시 길이를 구해야한다
				}
			}
			else if (curR == 5)
			{//회전 방향이 5인 경우, 즉 tempcurPiece는 방향이 4이다.
				*bestX = saveX + 2;  //x좌표를 원래대로 놓는다
				*bestRotation = saveR;
				curR = 1;
				curX = curX + 2;
				break;
			}
		}
		return 0;
	}

	/*
	 * path를 지정하는 명령어에 대한 설명：
	 *      'l': 한 칸 왼쪽으로 이동
	 *      'r': 한 칸 오른쪽으로 이동
	 *      'd': 한 칸 아래로 이동
	 *      'L': 가능한 가장 왼쪽으로 이동
	 *      'R': 가능한 가장 오른쪽으로 이동
	 *      'D': 가능한 가장 아래로 이동（이 후 추가 이동 가능）
	 *      'z': 반 시계방향으로 회전
	 *      'c': 시계방향으로 회전
	 * path 문자열 끝에'\0'이 하드 랜딩을 나타낸다.
	 *
	 * 위의 명령어를 이용하여 임의의 이동이 가능하며 아래의 전체 코드를 수정하여야 한다.
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
