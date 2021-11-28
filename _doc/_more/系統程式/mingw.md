# MinGW 安裝

如果你在 windows 中，而且安裝了 CodeBlocks ，那麼你的電腦裡應該已經有 gcc 了。

不過如果你要在 《命令列或 Visual Studio Code》當中使用 gcc，那麼就必須要先設定好系統路徑。

CodeBlocks 通常被安裝在《C:\Program Files (x86)\CodeBlocks\MinGW\bin》底下，如下圖所示：

![](./img/codeBlockGccPath.png)

將該路徑加入《系統路徑 PATH》的方法如下圖所示：

![](./img/codeBlockGccPathSetting.png)

選擇《控制台/系統及安全性/系統/進階系統設定/進階/環境變數》然後編輯《系統變數/PATH》，將該路徑加入即可。

接著請打開 Visual Studio Code 開啟一個 Terminal，就可以開始使用 gcc 了。

以下是一個用 gcc 編譯的畫面：

![](./img/gccInVsCode.png)