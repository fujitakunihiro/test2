●cmakeでmakefileファイルを作成
cd build

// デバッグ用
cmake .. -G"MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug

// リリース用
cmake .. -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release 

●vscodeでビルド
ctrl + Shift + B押下

●vscodeで実行
F5
