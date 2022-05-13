#include "Lab1011guiLaptop.h"
#include "stdafx.h"
#include "offergui.h"
//#include "UI.h"
#include "offer_service.h"
#include <iostream>
#include <QtWidgets/QApplication>

void runAllTests() {
	std::cout << "beginning testing..." << std::endl;
	testCreateOffer();
	test_create_repo();
	test_delete_repo();
	test_modify_repo();
	test_find_repo();
	testCreateService();
	testDeleteOfferService();
	testModifyOfferService();
	testFindOfferService();
	testFilters();
	testSorts();
	testAddCart();
	testDeleteFromCart();
	testGenerateRandom();
	testAddToWish();
	testDeleteWish();
	testGenerateWish();
	testUndo();
	std::cout << "finished testing..." << std::endl;
}

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	Lab1011guiLaptop w;
	runAllTests();
	OfferValidator valid;
	RepoOffer repo;
	//FileRepoOffer file_repo("oferte.txt");
	Wishlist wish;
	ServiceOffer serv(repo, valid, wish);
	//UI ui(serv);
	//ui.startUI();
	auto gui = OfferGUI(serv);
	gui.show();
	return a.exec();
}
