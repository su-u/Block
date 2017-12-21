#include"DxLib.h"
#include"main.h"
#include"Ball.h"
#include"Block.h"
#include"Object.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	SetOutApplicationLogValidFlag(FALSE);
	ChangeWindowMode(TRUE);
	SetGraphMode(RESOLUTIONX, RESOLUTIONY, 32);
	SetMainWindowText("ÉuÉçÉbÉNïˆÇµ");
	if (DxLib_Init() == -1) {
		return -1;
	}
	SetDrawScreen(DX_SCREEN_BACK);

	GameMain();

	DxLib_End();
	return 0;
}

int Loop() {
	if (!ScreenFlip() && !ProcessMessage() && !ClearDrawScreen()) {
		clsDx();
		return 1;
	} else {
		return 0;
	}
}

void GameMain() {
	int blockgh = LoadGraph("data/block.png");
	Block block[] = new Block(100,50)[COLUMN * ROW];
	int k = 0;
	for (int i = 0; i < COLUMN; i++) {
		for (int j = 0; j < ROW; j++) {
			block[k].SetId((i + 1)*(j + 1));
			block[k].SetPos((RESOLUTIONX / COLUMN) * (i + 1),(RESOLUTIONY / ROW) * (1 + 1) * 0.6);
			block[k].SetGh(blockgh);
			block[k].SetSize(100, 50);
			k++;
		}
	}
	while (Loop()) {
		for (int i = 0; i < (COLUMN * ROW); i++) {
			printfDx("%d\n", block[i].GetX());
			DrawRotaGraphF(block[i].GetX(), block[i].GetY(), 1, 0, block[i].GetGh(), TRUE);
		}
	}
}