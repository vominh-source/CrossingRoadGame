#pragma once
struct Button_State {
	bool is_down;//kiem tra xem ng dung co dang nhan xuong phim bam khong
	bool changed;//quyet dinh xem co nen co su thay doi o day khong
	//tuc la co ba trang thai:
	//1: pressed the button: luc nay is_down=true va chung ta cho vat the thay doi
	//2: hold to pressed the button: luc nay is_down=true va change=false
	//3: tha....
	//ns chung tuy vao ng su dung ma co the hieu chinh changed va isdown de co the phu hop
};
enum {
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_LEFT,
	BUTTON_RIGHT,

	BUTTON_COUNT
};
struct Input {
	Button_State buttons[BUTTON_COUNT];
};

