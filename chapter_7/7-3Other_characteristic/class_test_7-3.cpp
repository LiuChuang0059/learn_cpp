





#include <iostream>
#include <string>


class Screen
{
	

	public:
		typedef std::string::size_type pos;
		Screen = default();
		Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){ }

        char get() const { return contents[cursor]; }
        char get(pos r, pos c) const { return contents[r*width+c]; }//重载函数
        Screen &move(pos r, pos c);


	private:
		pos cursor =0;
		pos width =0 , height =0;
		std::string contents;

};

inline
Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row+c;

	return *this ;

}


class Window_mgr
{
private:
	std::vector<Screen> screens{Screen(24,80,' ')};//屏幕的尺寸和内容

};



















