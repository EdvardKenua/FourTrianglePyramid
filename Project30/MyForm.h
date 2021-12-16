#pragma once
#include <math.h>

namespace Project30 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ HeightLabel;
	private: System::Windows::Forms::TextBox^ SideBaseLabel;
	private: System::Windows::Forms::Button^ CalculateButton;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ Result;

	protected:



	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->HeightLabel = (gcnew System::Windows::Forms::TextBox());
			this->SideBaseLabel = (gcnew System::Windows::Forms::TextBox());
			this->CalculateButton = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ââåäèòå ñòîðîíó îñíîâàíèÿ:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ââåäèòå âûñîòó:";
			// 
			// HeightLabel
			// 
			this->HeightLabel->Location = System::Drawing::Point(112, 37);
			this->HeightLabel->Name = L"HeightLabel";
			this->HeightLabel->Size = System::Drawing::Size(53, 20);
			this->HeightLabel->TabIndex = 2;
			this->HeightLabel->TextChanged += gcnew System::EventHandler(this, &MyForm::HeightLabel_TextChanged);
			this->HeightLabel->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::HeightLabel_KeyPress);
			// 
			// SideBaseLabel
			// 
			this->SideBaseLabel->Location = System::Drawing::Point(171, 10);
			this->SideBaseLabel->Name = L"SideBaseLabel";
			this->SideBaseLabel->Size = System::Drawing::Size(62, 20);
			this->SideBaseLabel->TabIndex = 3;
			this->SideBaseLabel->TextChanged += gcnew System::EventHandler(this, &MyForm::SideBaseLabel_TextChanged);
			this->SideBaseLabel->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::SideBaseLabel_KeyPress);
			// 
			// CalculateButton
			// 
			this->CalculateButton->Location = System::Drawing::Point(291, 232);
			this->CalculateButton->Name = L"CalculateButton";
			this->CalculateButton->Size = System::Drawing::Size(95, 35);
			this->CalculateButton->TabIndex = 4;
			this->CalculateButton->Text = L"Ðàññ÷èòàòü";
			this->CalculateButton->UseVisualStyleBackColor = true;
			this->CalculateButton->Click += gcnew System::EventHandler(this, &MyForm::CalculateButton_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(23, 97);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(269, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Îáúåì ïðàâèëüíîé ÷åòûðåõóãîëüíîé ïèðàìèäû";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Click += gcnew System::EventHandler(this, &MyForm::checkBox1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(23, 130);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(134, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Ïëîùàäü ïîâåðõíñòè";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Click += gcnew System::EventHandler(this, &MyForm::checkBox2_Click);
			// 
			// Result
			// 
			this->Result->AutoSize = true;
			this->Result->Location = System::Drawing::Point(20, 174);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(67, 13);
			this->Result->TabIndex = 7;
			this->Result->Text = L"Ðåçóëüòàòû";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(398, 279);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->CalculateButton);
			this->Controls->Add(this->SideBaseLabel);
			this->Controls->Add(this->HeightLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CalculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		double Height, SideBase, Square, Volume;
		Height = Convert::ToDouble(HeightLabel->Text);
		SideBase = Convert::ToDouble(SideBaseLabel->Text);
		//Volume = ((1 / 3) * Height) * (SideBase * SideBase);
		Volume = (Height * SideBase * SideBase) / 3;
		Square = (SideBase * SideBase) + (2 * SideBase * Height);
		System::String^ message = "";
		//Result->Text = "Îáúåì ïðàâèëüíîé ÷åòåðõóãîëüíîé ïèðàìèä:" + Volume.ToString("c");
		if (checkBox1->Checked)
		{
			message += "Îáúåì ïðàâèëüíîé ÷åòåðõóãîëüíîé ïèðàìèä : " + Volume.ToString("n");
		}
		if (checkBox2->Checked)
		{
			message += "\nÏëîùàäü ÷åòûðåõóãîëüíîé ïèðàìèäû :" + Square.ToString("n");
		}
		Result->Text = message;
	}
	private: System::Void HeightLabel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (HeightLabel -> Text ->Length == 0)
		{
			CalculateButton->Enabled = false;
		}
		else 
		{
			CalculateButton -> Enabled = true;
		}
		if (SideBaseLabel->Text->Length == 0)
		{
			CalculateButton->Enabled = false;
		}
		else
		{
			CalculateButton->Enabled = true;
		}
		Result->Text = "Ââåäèòå ñòîðîíó îñíîâàíèÿ";
	}
	private: System::Void SideBaseLabel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (HeightLabel->Text->Length == 0)
		{
			CalculateButton->Enabled = false;
		}
		else
		{
			CalculateButton->Enabled = true;
		}
		if (SideBaseLabel->Text->Length == 0)
		{
			CalculateButton->Enabled = false;
		}
		else
		{
			CalculateButton->Enabled = true;
		}
		Result->Text = "Введите сторону основания и выберите какие действия выполнить";
	}
	private: System::Void checkBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Result->Text = "";
	}
	private: System::Void checkBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		Result->Text = "";
	}
	private: System::Void SideBaseLabel_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		{
			return;
		}
		if ((e->KeyChar == ','))
		{
			return;
		}
		if ((e->KeyChar == '.'))
		{
			return e->KeyChar = ',';
		}
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar==(char)Keys::Enter)
			{
				Result->Focus();
			}
			return;
		}
		e->Handled = true;
	}
	private: System::Void HeightLabel_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		{
			return;
		}
		if ((e -> KeyChar == ','))
		{
			return;
		}
		if ((e->KeyChar == '.'))
		{
			return e->KeyChar = ',';
		}
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				Result->Focus();
			}
			return;
		}
		e->Handled = true;
	}
};
}
