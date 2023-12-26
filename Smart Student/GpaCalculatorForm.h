#pragma once

namespace SmartStudent {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class GpaCalculatorForm : public System::Windows::Forms::Form
    {
    public:
        GpaCalculatorForm()
        {
            InitializeComponent();
        }

    protected:
        ~GpaCalculatorForm()
        {
            if (components)
            {
                delete components;
            }
        }



    private: System::Windows::Forms::Button^ btnCalculate;
    private: System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::ComboBox^ comboBox3;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::ComboBox^ comboBox4;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::ComboBox^ comboBox5;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::ComboBox^ comboBox6;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::ComboBox^ comboBox7;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::ComboBox^ comboBox8;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::ComboBox^ comboBox9;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::ComboBox^ comboBox10;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::ComboBox^ comboBox11;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::ComboBox^ comboBox12;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::ComboBox^ comboBox13;
    private: System::Windows::Forms::Label^ label15;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GpaCalculatorForm::typeid));
            this->btnCalculate = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // btnCalculate
            // 
            this->btnCalculate->Location = System::Drawing::Point(96, 472);
            this->btnCalculate->Name = L"btnCalculate";
            this->btnCalculate->Size = System::Drawing::Size(159, 23);
            this->btnCalculate->TabIndex = 2;
            this->btnCalculate->Text = L"Calculate GPA";
            this->btnCalculate->Click += gcnew System::EventHandler(this, &GpaCalculatorForm::btnCalculate_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(93, 522);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(32, 13);
            this->label2->TabIndex = 0;
            this->label2->Text = L"GPA:";
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox1->Location = System::Drawing::Point(177, 81);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(46, 21);
            this->comboBox1->TabIndex = 3;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GpaCalculatorForm::comboBox1_SelectedIndexChanged);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(118, 84);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(53, 13);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Metrology";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(118, 116);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(57, 13);
            this->label3->TabIndex = 6;
            this->label3->Text = L"Computing";
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox2->Location = System::Drawing::Point(177, 113);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(46, 21);
            this->comboBox2->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(84, 146);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(90, 13);
            this->label4->TabIndex = 8;
            this->label4->Text = L"Applied Electricity";
            // 
            // comboBox3
            // 
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox3->Location = System::Drawing::Point(177, 143);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(46, 21);
            this->comboBox3->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(70, 177);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(105, 13);
            this->label5->TabIndex = 10;
            this->label5->Text = L"Engineering Drawing";
            // 
            // comboBox4
            // 
            this->comboBox4->FormattingEnabled = true;
            this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox4->Location = System::Drawing::Point(177, 174);
            this->comboBox4->Name = L"comboBox4";
            this->comboBox4->Size = System::Drawing::Size(46, 21);
            this->comboBox4->TabIndex = 9;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(107, 208);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(67, 13);
            this->label6->TabIndex = 12;
            this->label6->Text = L"Mathematics";
            // 
            // comboBox5
            // 
            this->comboBox5->FormattingEnabled = true;
            this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox5->Location = System::Drawing::Point(177, 205);
            this->comboBox5->Name = L"comboBox5";
            this->comboBox5->Size = System::Drawing::Size(46, 21);
            this->comboBox5->TabIndex = 11;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(133, 238);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(41, 13);
            this->label7->TabIndex = 14;
            this->label7->Text = L"English";
            // 
            // comboBox6
            // 
            this->comboBox6->FormattingEnabled = true;
            this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox6->Location = System::Drawing::Point(177, 235);
            this->comboBox6->Name = L"comboBox6";
            this->comboBox6->Size = System::Drawing::Size(46, 21);
            this->comboBox6->TabIndex = 13;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(58, 439);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(117, 13);
            this->label8->TabIndex = 26;
            this->label8->Text = L"Environmental Pollution";
            // 
            // comboBox7
            // 
            this->comboBox7->FormattingEnabled = true;
            this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox7->Location = System::Drawing::Point(177, 436);
            this->comboBox7->Name = L"comboBox7";
            this->comboBox7->Size = System::Drawing::Size(46, 21);
            this->comboBox7->TabIndex = 25;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(100, 409);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(75, 13);
            this->label9->TabIndex = 24;
            this->label9->Text = L"Linear Algebra";
            // 
            // comboBox8
            // 
            this->comboBox8->FormattingEnabled = true;
            this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox8->Location = System::Drawing::Point(177, 406);
            this->comboBox8->Name = L"comboBox8";
            this->comboBox8->Size = System::Drawing::Size(46, 21);
            this->comboBox8->TabIndex = 23;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(89, 378);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(86, 13);
            this->label10->TabIndex = 22;
            this->label10->Text = L"Material Science";
            // 
            // comboBox9
            // 
            this->comboBox9->FormattingEnabled = true;
            this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox9->Location = System::Drawing::Point(177, 375);
            this->comboBox9->Name = L"comboBox9";
            this->comboBox9->Size = System::Drawing::Size(46, 21);
            this->comboBox9->TabIndex = 21;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(88, 347);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(87, 13);
            this->label11->TabIndex = 20;
            this->label11->Text = L"Thermodynamics";
            // 
            // comboBox10
            // 
            this->comboBox10->FormattingEnabled = true;
            this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox10->Location = System::Drawing::Point(177, 344);
            this->comboBox10->Name = L"comboBox10";
            this->comboBox10->Size = System::Drawing::Size(46, 21);
            this->comboBox10->TabIndex = 19;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(57, 317);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(118, 13);
            this->label12->TabIndex = 18;
            this->label12->Text = L"Engineering Machanics";
            // 
            // comboBox11
            // 
            this->comboBox11->FormattingEnabled = true;
            this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox11->Location = System::Drawing::Point(177, 314);
            this->comboBox11->Name = L"comboBox11";
            this->comboBox11->Size = System::Drawing::Size(46, 21);
            this->comboBox11->TabIndex = 17;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(59, 285);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(116, 13);
            this->label13->TabIndex = 16;
            this->label13->Text = L"Computer Programming";
            // 
            // comboBox12
            // 
            this->comboBox12->FormattingEnabled = true;
            this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+",
                    L"C", L"C-", L"D+", L"D", L"E"
            });
            this->comboBox12->Location = System::Drawing::Point(177, 282);
            this->comboBox12->Name = L"comboBox12";
            this->comboBox12->Size = System::Drawing::Size(46, 21);
            this->comboBox12->TabIndex = 15;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(118, 34);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(51, 13);
            this->label14->TabIndex = 28;
            this->label14->Text = L"Semester";
            this->label14->Click += gcnew System::EventHandler(this, &GpaCalculatorForm::label14_Click);
            // 
            // comboBox13
            // 
            this->comboBox13->FormattingEnabled = true;
            this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Semester 1", L"Semester 2" });
            this->comboBox13->Location = System::Drawing::Point(177, 31);
            this->comboBox13->Name = L"comboBox13";
            this->comboBox13->Size = System::Drawing::Size(87, 21);
            this->comboBox13->TabIndex = 27;
            this->comboBox13->SelectedIndexChanged += gcnew System::EventHandler(this, &GpaCalculatorForm::comboBox13_SelectedIndexChanged);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Location = System::Drawing::Point(134, 522);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(10, 13);
            this->label15->TabIndex = 29;
            this->label15->Text = L" ";
            // 
            // GpaCalculatorForm
            // 
            this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->ClientSize = System::Drawing::Size(354, 562);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->comboBox13);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->comboBox7);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->comboBox8);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->comboBox9);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->comboBox10);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->comboBox11);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->comboBox12);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->comboBox6);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->comboBox5);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->comboBox4);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->comboBox3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->btnCalculate);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"GpaCalculatorForm";
            this->Text = L"GPA Calculator";
            this->Load += gcnew System::EventHandler(this, &GpaCalculatorForm::GpaCalculatorForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e)
        {
            double gpa = 0;
            int i = 0;

            if (comboBox13->Text == "Semester 1") {
                i = 6;
            }
            else if (comboBox13->Text == "Semester 2") {
                i = 12;
            }

            double module[12] = { 0 };

            for (int j = 0; j < i; ++j) {
                String^ comboBoxName = "comboBox" + (j + 1);
                ComboBox^ currentComboBox = dynamic_cast<ComboBox^>(Controls[comboBoxName]);


                if (currentComboBox->Text == "A+") {
					module[j] = 4.0;
				}
				else if (currentComboBox->Text == "A") {
                    module[j] = 3.7;
				}
				else if (currentComboBox->Text == "A-") {
                    module[j] = 3.3;
				}
				else if (currentComboBox->Text == "B+") {
                    module[j] = 3.0;
				}
				else if (currentComboBox->Text == "B") {
                    module[j] = 2.7;
				}
				else if (currentComboBox->Text == "B-") {
                    module[j] = 2.3;
				}
				else if (currentComboBox->Text == "C+") {
                    module[j] = 2.0;
				}
				else if (currentComboBox->Text == "C") {
                    module[j] = 1.7;
				}
				else if (currentComboBox->Text == "C-") {
                    module[j] = 1.3;
				}
				else if (currentComboBox->Text == "D+") {
                    module[j] = 1.0;
				}
				else if (currentComboBox->Text == "D") {
                    module[j] = 0.7;
				}
				else if (currentComboBox->Text == "E") {
                    module[j] = 0.0;
				}
				else {
                    module[j] = 0.0;
				}

                gpa += module[j];

                
            }

            if (i > 0) {
                gpa /= i;
            }

            label15->Text = Convert::ToString(gpa);
          


        }



    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void GpaCalculatorForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox13_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
