#include <iostream>

extern "C"
{
    void output(int i)
    {
        std::cout << i << std::endl;
    }
}

//  "C"をつけると中身がCで使えるものであることが保証される
//  つまり中でオーバーロードなどするとエラーが出る
//  関数内ならブラックボックスとしてc++の処理が書ける