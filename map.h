#pragma once

#include <vector>

class Map {

public:
	Map();
	virtual ~Map();
	
	//グラフィックデータのロード、アンロード	
	void init();
	void unload();

	void update();

	//描画
	void draw();

private:
	//マップチップ編集用カーソルの表示
	void drawCursor();

	//マップチップの数を取得する
	int chipNumX();
	int chipNumY();
	int chipNum();

	//マップデータの入出力
	void outputData();		//マップのデータを出力する
	void readData();		//マップのデータの読み込み

private:

	//グラフィックデータのハンドル
	int m_handle;

	//グラフィックのデータ
	int m_graphWidth;
	int m_graphHeight;

	//マップチップ編集用データ

	int m_cursorNo;
	std::vector<int> m_mapData;
};