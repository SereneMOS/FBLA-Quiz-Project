#include <iostream>
#include <string>
#include <stdio.h>
#include "tinyxml2.h"
#include <random>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace tinyxml2; //Global variables
int correct_answers;
std::string name{};
int main() {
	XMLDocument xmlDoc;		//Loading the xml file and opening the root element
	xmlDoc.LoadFile("Information Database.xml");
	XMLElement* pRootElement = xmlDoc.RootElement();
	XMLNode* pRoot = xmlDoc.FirstChildElement();
	XMLElement* pQuestions = pRootElement->FirstChildElement("Questions");
	std::cout << "Please enter your name as First_Last.\n"; //Name and answer warning
	std::cin >> name;
	std::cout << "When answering matching questions, type the letters in the order of the numbers that they match up too, and seperate them with commas and no spaces. Be aware, all answers are case specific.\n";
	for (int m = 0; m < 5; m++) { //Loop for each question
		srand(time(0));
		int drawn = rand() % 51;
		std::cout << "---------------- " << m + 1 << " ------------------\n";
		if (drawn == 1) { //Question database
			XMLElement* pq1 = pQuestions->FirstChildElement("q1");
			XMLElement* pquestion = pq1->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq1->FirstChildElement("answer");
			std::string q_1_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_1_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 2) {
			XMLElement* pq2 = pQuestions->FirstChildElement("q2");
			XMLElement* pquestion = pq2->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq2->FirstChildElement("answer");
			std::string q_2_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_2_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 3) {
			XMLElement* pq3 = pQuestions->FirstChildElement("q3");
			XMLElement* pquestion = pq3->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq3->FirstChildElement("answer");
			std::string q_3_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_3_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 4) {
			XMLElement* pq4 = pQuestions->FirstChildElement("q4");
			XMLElement* pquestion = pq4->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq4->FirstChildElement("answer");
			std::string q_4_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_4_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 5) {
			XMLElement* pq5 = pQuestions->FirstChildElement("q5");
			XMLElement* pquestion = pq5->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq5->FirstChildElement("answer");
			std::string q_5_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_5_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 6) {
			XMLElement* pq6 = pQuestions->FirstChildElement("q6");
			XMLElement* pquestion = pq6->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq6->FirstChildElement("answer");
			std::string q_6_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_6_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 7) {
			XMLElement* pq7 = pQuestions->FirstChildElement("q7");
			XMLElement* pquestion = pq7->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq7->FirstChildElement("answer");
			std::string q_7_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_7_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 8) {
			XMLElement* pq8 = pQuestions->FirstChildElement("q8");
			XMLElement* pquestion = pq8->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq8->FirstChildElement("answer");
			std::string q_8_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_8_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 9) {
			XMLElement* pq9 = pQuestions->FirstChildElement("q9");
			XMLElement* pquestion = pq9->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq9->FirstChildElement("answer");
			std::string q_9_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_9_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 10) {
			XMLElement* pq10 = pQuestions->FirstChildElement("q10");
			XMLElement* pquestion = pq10->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq10->FirstChildElement("answer");
			std::string q_10_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_10_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 11) {
			XMLElement* pq11 = pQuestions->FirstChildElement("q11");
			XMLElement* pquestion = pq11->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq11->FirstChildElement("answer");
			std::string q_11_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_11_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 12) {
			XMLElement* pq12 = pQuestions->FirstChildElement("q12");
			XMLElement* pquestion = pq12->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq12->FirstChildElement("answer");
			std::string q_12_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_12_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 13) {
			XMLElement* pq13 = pQuestions->FirstChildElement("q13");
			XMLElement* pquestion = pq13->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq13->FirstChildElement("answer");
			std::string q_13_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_13_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 14) {
			XMLElement* pq14 = pQuestions->FirstChildElement("q14");
			XMLElement* pquestion = pq14->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq14->FirstChildElement("answer");
			std::string q_14_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_14_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 15) {
			XMLElement* pq15 = pQuestions->FirstChildElement("q15");
			XMLElement* pquestion = pq15->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq15->FirstChildElement("answer");
			std::string q_15_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_15_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 16) {
			XMLElement* pq16 = pQuestions->FirstChildElement("q16");
			XMLElement* pquestion = pq16->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq16->FirstChildElement("answer");
			std::string q_16_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_16_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 17) {
			XMLElement* pq17 = pQuestions->FirstChildElement("q17");
			XMLElement* pquestion = pq17->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq17->FirstChildElement("answer");
			std::string q_17_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_17_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 18) {
			XMLElement* pq18 = pQuestions->FirstChildElement("q18");
			XMLElement* pquestion = pq18->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq18->FirstChildElement("answer");
			std::string q_18_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_18_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 19) {
			XMLElement* pq19 = pQuestions->FirstChildElement("q19");
			XMLElement* pquestion = pq19->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq19->FirstChildElement("answer");
			std::string q_19_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_19_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 20) {
			XMLElement* pq20 = pQuestions->FirstChildElement("q20");
			XMLElement* pquestion = pq20->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq20->FirstChildElement("answer");
			std::string q_20_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_20_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 21) {
			XMLElement* pq21 = pQuestions->FirstChildElement("q21");
			XMLElement* pquestion = pq21->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq21->FirstChildElement("answer");
			std::string q_21_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_21_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 22) {
			XMLElement* pq22 = pQuestions->FirstChildElement("q22");
			XMLElement* pquestion = pq22->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq22->FirstChildElement("answer");
			std::string q_22_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_22_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 23) {
			XMLElement* pq23 = pQuestions->FirstChildElement("q23");
			XMLElement* pquestion = pq23->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq23->FirstChildElement("answer");
			std::string q_23_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_23_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 24) {
			XMLElement* pq24 = pQuestions->FirstChildElement("q24");
			XMLElement* pquestion = pq24->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq24->FirstChildElement("answer");
			std::string q_24_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_24_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 25) {
			XMLElement* pq25 = pQuestions->FirstChildElement("q25");
			XMLElement* pquestion = pq25->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq25->FirstChildElement("answer");
			std::string q_25_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_25_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 26) {
			XMLElement* pq26 = pQuestions->FirstChildElement("q26");
			XMLElement* pquestion = pq26->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* panswer = pq26->FirstChildElement("answer");
			std::string q_26_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_26_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 27) {
			XMLElement* pq27 = pQuestions->FirstChildElement("q27");
			XMLElement* pquestion = pq27->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq27->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq27->FirstChildElement("answer");
			std::string q_27_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_27_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 28) {
			XMLElement* pq28 = pQuestions->FirstChildElement("q28");
			XMLElement* pquestion = pq28->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq28->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq28->FirstChildElement("answer");
			std::string q_28_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_28_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 29) {
			XMLElement* pq29 = pQuestions->FirstChildElement("q29");
			XMLElement* pquestion = pq29->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq29->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq29->FirstChildElement("answer");
			std::string q_29_answer = panswer->GetText();
			std::string attempt;  std::cin >> attempt;
			if (attempt == q_29_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 30) {
			XMLElement* pq30 = pQuestions->FirstChildElement("q31");
			XMLElement* pquestion = pq30->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq30->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq30->FirstChildElement("answer");
			std::string q_30_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_30_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 31) {
			XMLElement* pq31 = pQuestions->FirstChildElement("q31");
			XMLElement* pquestion = pq31->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq31->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq31->FirstChildElement("answer");
			std::string q_31_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_31_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 32) {
			XMLElement* pq32 = pQuestions->FirstChildElement("q32");
			XMLElement* pquestion = pq32->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq32->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq32->FirstChildElement("answer");
			std::string q_32_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_32_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 33) {
			XMLElement* pq33 = pQuestions->FirstChildElement("q33");
			XMLElement* pquestion = pq33->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq33->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq33->FirstChildElement("answer");
			std::string q_33_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_33_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 34) {
			XMLElement* pq34 = pQuestions->FirstChildElement("q34");
			XMLElement* pquestion = pq34->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq34->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq34->FirstChildElement("answer");
			std::string q_34_answer = panswer->GetText();
			std::string attempt;  std::cin >> attempt;
			if (attempt == q_34_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 35) {
			XMLElement* pq35 = pQuestions->FirstChildElement("q35");
			XMLElement* pquestion = pq35->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq35->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq35->FirstChildElement("answer");
			std::string q_35_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_35_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 36) {
			XMLElement* pq36 = pQuestions->FirstChildElement("q36");
			XMLElement* pquestion = pq36->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq36->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq36->FirstChildElement("answer");
			std::string q_36_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_36_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 37) {
			XMLElement* pq37 = pQuestions->FirstChildElement("q37");
			XMLElement* pquestion = pq37->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq37->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq37->FirstChildElement("answer");
			std::string q_37_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_37_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 38) {
			XMLElement* pq38 = pQuestions->FirstChildElement("q38");
			XMLElement* pquestion = pq38->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq38->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq38->FirstChildElement("answer");
			std::string q_38_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_38_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 39) {
			XMLElement* pq39 = pQuestions->FirstChildElement("q39");
			XMLElement* pquestion = pq39->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq39->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq39->FirstChildElement("answer");
			std::string q_39_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_39_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 40) {
			XMLElement* pq40 = pQuestions->FirstChildElement("q40");
			XMLElement* pquestion = pq40->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq40->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* panswer = pq40->FirstChildElement("answer");
			std::string q_40_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_40_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 41) {
			XMLElement* pq41 = pQuestions->FirstChildElement("q41");
			XMLElement* pquestion = pq41->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq41->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq41->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq41->FirstChildElement("answer");
			std::string q_41_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_41_answer) { correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 42) {
			XMLElement* pq42 = pQuestions->FirstChildElement("q42");
			XMLElement* pquestion = pq42->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq42->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq42->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq42->FirstChildElement("answer");
			std::string q_42_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_42_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 43) {
			XMLElement* pq43 = pQuestions->FirstChildElement("q43");
			XMLElement* pquestion = pq43->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq43->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq43->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq43->FirstChildElement("answer");
			std::string q_43_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_43_answer) { correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 44) {
			XMLElement* pq44 = pQuestions->FirstChildElement("q44");
			XMLElement* pquestion = pq44->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq44->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq44->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq44->FirstChildElement("answer");
			std::string q_44_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_44_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; } }
		if (drawn == 45) {
			XMLElement* pq45 = pQuestions->FirstChildElement("q45");
			XMLElement* pquestion = pq45->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq45->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq45->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq45->FirstChildElement("answer");
			std::string q_45_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_45_answer) { correct_answers++; std::cout << "Correct answer\n"; }
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 46) {
			XMLElement* pq46 = pQuestions->FirstChildElement("q46");
			XMLElement* pquestion = pq46->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq46->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq46->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq46->FirstChildElement("answer");
			std::string q_46_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_46_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 47) {
			XMLElement* pq47 = pQuestions->FirstChildElement("q47");
			XMLElement* pquestion = pq47->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq47->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq47->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq47->FirstChildElement("answer");
			std::string q_47_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_47_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 48) {
			XMLElement* pq48 = pQuestions->FirstChildElement("q48");
			XMLElement* pquestion = pq48->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq48->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq48->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq48->FirstChildElement("answer");
			std::string q_48_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_48_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 49) {
			XMLElement* pq49 = pQuestions->FirstChildElement("q49");
			XMLElement* pquestion = pq49->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq49->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq49->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq49->FirstChildElement("answer");
			std::string q_49_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_49_answer) {correct_answers++; std::cout << "Correct answer\n";}
			else { std::cout << "Incorrect answer\n"; }	}
		if (drawn == 50) {
			XMLElement* pq50 = pQuestions->FirstChildElement("q50");
			XMLElement* pquestion = pq50->FirstChildElement("question");
			std::cout << pquestion->GetText() << '\n';
			XMLElement* pchoices = pq50->FirstChildElement("choices");
			std::cout << pchoices->GetText() << '\n';
			XMLElement* pa_choices = pq50->FirstChildElement("a_choices");
			std::cout << pa_choices->GetText() << '\n';
			XMLElement* panswer = pq50->FirstChildElement("answer");
			std::string q_50_answer = panswer->GetText();
			std::string attempt; std::cin >> attempt;
			if (attempt == q_50_answer) { correct_answers++; std::cout << "Correct answer\n"; }
			else { std::cout << "Incorrect answer\n"; }	}
	}
	int percentage = correct_answers / 5.0 * 100; //Calculate score
	std::cout << "==========================================\n";
	std::cout << name << " - " << percentage << "%\n";
}