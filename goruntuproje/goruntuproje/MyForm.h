#pragma once
#include <Windows.h>
#include <atlstr.h>
#include "imge.h"
namespace goruntuproje {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm i�in �zet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Olu�turucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullan�lan t�m kaynaklar� temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;


	protected:

	protected:

	private:
		/// <summary>
		///Gerekli tasar�mc� de�i�keni.
		BYTE * Buffer, *Raw_Intensity;
		unsigned int Width, Height;
		long Size;
		int nesne = 0;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;

			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Tasar�mc� deste�i i�in gerekli metot - bu metodun 
			 ///i�eri�ini kod d�zenleyici ile de�i�tirmeyin.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
				 System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
				 System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				 this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
				 this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				 this->menuStrip1->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Size = System::Drawing::Size(1000, 24);
				 this->menuStrip1->TabIndex = 0;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // fileToolStripMenuItem
				 // 
				 this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->openToolStripMenuItem,
						 this->toolStripMenuItem1
				 });
				 this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
				 this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
				 this->fileToolStripMenuItem->Text = L"File";
				 // 
				 // openToolStripMenuItem
				 // 
				 this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
				 this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
				 this->openToolStripMenuItem->Text = L"Open";
				 this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
				 // 
				 // toolStripMenuItem1
				 // 
				 this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
				 this->toolStripMenuItem1->Size = System::Drawing::Size(103, 22);
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Location = System::Drawing::Point(0, 27);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(278, 295);
				 this->pictureBox1->TabIndex = 1;
				 this->pictureBox1->TabStop = false;
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileName = L"openFileDialog1";
				 // 
				 // pictureBox2
				 // 
				 this->pictureBox2->Location = System::Drawing::Point(228, 27);
				 this->pictureBox2->Name = L"pictureBox2";
				 this->pictureBox2->Size = System::Drawing::Size(256, 295);
				 this->pictureBox2->TabIndex = 2;
				 this->pictureBox2->TabStop = false;
				 this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
				 // 
				 // chart1
				 // 
				 chartArea3->Name = L"ChartArea1";
				 this->chart1->ChartAreas->Add(chartArea3);
				 legend3->Name = L"Legend1";
				 this->chart1->Legends->Add(legend3);
				 this->chart1->Location = System::Drawing::Point(0, 340);
				 this->chart1->Name = L"chart1";
				 series3->ChartArea = L"ChartArea1";
				 series3->Legend = L"Legend1";
				 series3->MarkerSize = 10;
				 series3->Name = L"Series1";
				 this->chart1->Series->Add(series3);
				 this->chart1->Size = System::Drawing::Size(484, 317);
				 this->chart1->TabIndex = 3;
				 this->chart1->Text = L"chart1";
				 this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
				 // 
				 // pictureBox3
				 // 
				 this->pictureBox3->Location = System::Drawing::Point(490, 27);
				 this->pictureBox3->Name = L"pictureBox3";
				 this->pictureBox3->Size = System::Drawing::Size(279, 261);
				 this->pictureBox3->TabIndex = 4;
				 this->pictureBox3->TabStop = false;
				 this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->label1->ForeColor = System::Drawing::Color::Black;
				 this->label1->Location = System::Drawing::Point(556, 445);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(111, 24);
				 this->label1->TabIndex = 5;
				 this->label1->Text = L"T�klay�n�z";
				 this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->label2->ForeColor = System::Drawing::Color::Red;
				 this->label2->Location = System::Drawing::Point(556, 416);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(171, 29);
				 this->label2->TabIndex = 6;
				 this->label2->Text = L"Nesne Say�s�:\r\n";
				 // 
				 // pictureBox4
				 // 
				 this->pictureBox4->Location = System::Drawing::Point(765, 36);
				 this->pictureBox4->Name = L"pictureBox4";
				 this->pictureBox4->Size = System::Drawing::Size(235, 303);
				 this->pictureBox4->TabIndex = 7;
				 this->pictureBox4->TabStop = false;
				 this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
				 // 
				 // pictureBox5
				 // 
				 this->pictureBox5->Location = System::Drawing::Point(723, 264);
				 this->pictureBox5->Name = L"pictureBox5";
				 this->pictureBox5->Size = System::Drawing::Size(288, 222);
				 this->pictureBox5->TabIndex = 8;
				 this->pictureBox5->TabStop = false;
				 this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1000, 741);
				 this->Controls->Add(this->pictureBox5);
				 this->Controls->Add(this->pictureBox4);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->pictureBox3);
				 this->Controls->Add(this->chart1);
				 this->Controls->Add(this->pictureBox2);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->menuStrip1);
				 this->MainMenuStrip = this->menuStrip1;
				 this->Name = L"MyForm";
				 this->Text = L"MyForm";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		LPCTSTR input;
		CString str;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			str = openFileDialog1->FileName;
			input = (LPCTSTR)str;
			//BMP image okumak
			Buffer = LoadBMP(Width, Height, Size, input);
			Raw_Intensity = ConvertBMPToIntensity(Buffer, Width, Height);
			pictureBox1->Width = Width;
			pictureBox1->Height = Height;


			// GR� FORMATA �EV�RME
			this->pictureBox2->Location = System::Drawing::Point(pictureBox1->Left + pictureBox1->Width + 0, 27);

			unsigned int row, column;
			Bitmap^ surface = gcnew Bitmap(pictureBox2->Width, pictureBox2->Height);
			pictureBox2->Image = surface;
			Color c;
			for (row = 0; row < Height; row++)
				for (column = 0; column < Width; column++) {
					//RGB de�erlerini ayn� de�er yap�yorum
					c = Color::FromArgb(Raw_Intensity[row*Width + column], Raw_Intensity[row*Width + column], Raw_Intensity[row*Width + column]);
					surface->SetPixel(column, row, c);
				}

			this->pictureBox1->ImageLocation = openFileDialog1->FileName;



			//H�STOGRAM
			int dizi[256];
			int n;
			//Piksel say�lar�n�n atanmas� i�in olu�turulan dizi s�f�rland�.
			for (int i = 0; i < 256; i++)
			{
				dizi[i] = 0;
			}

			//Piksel parlakl�k de�eri yeni olu�turulan dizinin o indexinin de�erini 1 art�racak.T�m piksel de�erleri i�in bu tekrarlanacak.
			for (int j = 0; j < (Height*Width); j++)
			{
				n = Raw_Intensity[j];
				dizi[n]++;
				n = 0;
			}

			this->chart1->Titles->Clear();//Chart da varsay�lan olarak gelen ba�l�klar� temizliyoruz.
			this->chart1->Series->Clear();//Chart da varsay�lan olarak gelen series (Liste) temizliyoruz.
			this->chart1->Series->Add("Histogram");//Histogram ba�l��� eklendi.

												   //GR� FORMATTAK� RESM�N H�STOGRAM GRAF���
			for (int i = 0; i < 256; i++)
			{
				this->chart1->Series[0]->Points->AddY(dizi[i]);//x parametresi altta yazacak yaz�y� belirliyor y ise o yaz�n�n de�erini belirliyor.
			}
			//Histogram Sonu

			//S�YAH BEYAZ FORMATA �EV�RME
			this->pictureBox3->Location = System::Drawing::Point(pictureBox2->Left + pictureBox2->Height + 0, 27);
			Bitmap^ surface1 = gcnew Bitmap(pictureBox3->Width, pictureBox3->Height);
			pictureBox3->Image = surface1;

			//t1 ve t2 benim iki e�ik de�erim
			//tx ve ty yeni kar��la�t�rma yap�lacak t �ss� de�erleri
			double t1 = 50, t2 = 200, tx = 0, ty = 0;
		
			while (t1 != tx && t2 != ty)
			{


				double toplam1 = 0, bol�1 = 0;

				double toplam2 = 0, bol�2 = 0;

				for (int i = 0; i < 256; i++)
				{
					if ((i - t1) < (t2-i))
					{
						//tx de�erinin bulabilmek i�in indis de�erleri ile indis numaralar�n� �arp�yorum
						toplam1 = toplam1 + dizi[i] * i;

						//tx de�erinin bulabilmek i�in indis de�erlerini topluyorum
						bol�1 = bol�1 + dizi[i];
					}
					else
					{
						//ty de�erinin bulabilmek i�in indis de�erleri ile indis numaralar�n� �arp�yorum
						toplam2 = toplam2 + dizi[i] * i;

						//ty de�erinin bulabilmek i�in indis de�erlerini topluyorum
						bol�2 = bol�2 + dizi[i];
					}
				}

				//tx ve ty de�erlerini buluyorum
				tx = (toplam1 / bol�1);
				ty = (toplam2 / bol�2);

				//tx ve ty de�erleri t1 ve t2 ye eitse bu de�erler son kesin de�erlerim olacak 
				//ve bunlar ile bu whiledan ��karak son de�erlerim onlar olacak
				if (t1 == tx && t2 == ty)
				{
					break;
				}

				//yeni t1 ve t2 de�erlerine tx ve ty de�erlerini at�yorum
				//t3, tx, ty yi s�f�rl�yor yeni t de�erlerini bulmak i�in ba�tan i�lemleri tekrarl�yorum
				else
				{
					t1 = tx;
					t2 = ty;
					tx = 0;
					ty = 0;
				}
			}

			//Pikseller 255 ve 0 a setle
			//Siyah Beyaz Devam�
			for (int k = 0; k < (Width*Height); k++)
			{
				//Piksel de�eri ortalama bulunan T de�erinden b�y�kse pikseli 255 e sabitle. 
				if (Raw_Intensity[k] >= t2)
				{
					Raw_Intensity[k] = 255;
				}

				//Piksel de�eri ortalama bulunan T de�erinden k���kse pikseli 0 a sabitle.
				else if(Raw_Intensity[k] <= t1)
				{
					Raw_Intensity[k] = 0;
				}
				else {
					if ((Raw_Intensity[k]-t1) < (t2- Raw_Intensity[k]) )
					{

						Raw_Intensity[k] = 0;
					}
					else {
						Raw_Intensity[k] = 255;
					}



				}
			}

			//Yeni Siyah Beyaz resmi ekranda g�ster.
			int b = 0;
			for (row = 0; row < Height; row++)
				for (column = 0; column < Width; column++) {
					Color n;
					//n = Color::FromArgb(Raw_Intensity[b],50, 50);
					n = Color::FromArgb(Raw_Intensity[b], Raw_Intensity[b], Raw_Intensity[b]);
					b++;
					surface1->SetPixel(column, row, n);
				}

			//Dilation

			int *dilation = new int[Width*Height];

			this->pictureBox4->Location = System::Drawing::Point(pictureBox3->Left + pictureBox3->Height + 0, 27);
			Bitmap^ surface2 = gcnew Bitmap(pictureBox4->Width, pictureBox4->Height);
			pictureBox4->Image = surface2;

			//Resmin ilk piksel de�eri i�in(0,0)
			int j = 0;
			while (j < (Width * Height))
			{
				if (j == 0)
				{
					if (Raw_Intensity[1] == 255 ||
						Raw_Intensity[Width] == 255 ||
						Raw_Intensity[Width + 1] == 255)
					{
						dilation[0] = 255;
					}
					else
						dilation[0] = 0;
				}

				//Resmin ilk sat�r elemanlar� i�in
				else if (0 < j && j < (Width - 1))
				{
					if (Raw_Intensity[j - 1] == 255 || Raw_Intensity[j + 1] == 255 ||
						Raw_Intensity[Width + j - 1] == 255 || Raw_Intensity[Width + j] == 255 ||
						Raw_Intensity[Width + j + 1] == 255)
					{
						dilation[j] = 255;
					}
					else
					{
						dilation[j] = 0;
					}
				}

				//Resmin Width inci eleman� i�in
				else if (j == (Width - 1))
				{
					if (Raw_Intensity[Width - 2] == 255 ||
						Raw_Intensity[2 * Width - 2] == 255 ||
						Raw_Intensity[2 * Width - 1] == 255)
					{
						dilation[j] = 255;
					}
					else
					{
						dilation[j] = 0;
					}
				}

				//Resmin sol k��e pikselleri i�in
				else if (j % Width == 0)
				{
					if (Raw_Intensity[j - Width] == 255 || Raw_Intensity[j - Width + 1] == 255 ||
						Raw_Intensity[j + 1] == 255 || Raw_Intensity[Width + j] == 255 ||
						Raw_Intensity[Width + j + 1] == 255)
					{
						dilation[j] = 255;
					}
					else
					{
						dilation[j] = 0;
					}
				}

				//Resmin sa� k��e pikselleri i�in
				else if ((j + 1) % Width == 0)
				{
					if (Raw_Intensity[j - Width - 1] == 255 || Raw_Intensity[j - Width] == 255 ||
						Raw_Intensity[j - 1] == 255 || Raw_Intensity[Width + j - 1] == 255 ||
						Raw_Intensity[Width + j] == 255)
					{
						dilation[j] = 255;
					}
					else
					{
						dilation[j] = 0;
					}
				}
				//Sol alt piksel de�eri i�in
				else if (j == (Width * Height - Width))
				{
					if (Raw_Intensity[(Height - 1) * Width - Width] == 255 ||
						Raw_Intensity[(Height - 1) * Width - Width + 1] == 255 ||
						Raw_Intensity[Height * Width - Width + 1] == 255)
					{
						dilation[j] = 255;
					}
					else
					{
						dilation[j] = 0;
					}
				}


				//Sa� alt piksel de�eri i�in
				else if (j == (Width * Height - 1))
				{
					if (Raw_Intensity[(Height - 1) * Width - 1] == 255 ||
						Raw_Intensity[(Height - 1) * Width - 2] == 255 ||
						Raw_Intensity[Height * Width - 2] == 255)
					{
						dilation[j] = 255;
					}
					else
					{
						dilation[j] = 0;
					}
				}

				//Alt s�ra piksel de�erleri i�in
				else if (((Height * Width) - Width) < j && j < (Height * Width - 1))
				{
					if (Raw_Intensity[j - 1] == 255 || Raw_Intensity[j + 1] == 255 ||
						Raw_Intensity[j - 1 - Width] == 255 || Raw_Intensity[j - Width] == 255 ||
						Raw_Intensity[j + 1 - Width] == 255)
					{
						dilation[j] = 255;
					}
					else
					{
						dilation[j] = 0;
					}
				}
				else
				{
					// Ortada kalan piksel de�erleri i�in
					if (Raw_Intensity[j - 1] == 255 || Raw_Intensity[j + 1] == 255 ||
						Raw_Intensity[j - Width - 1] == 255 || Raw_Intensity[j - Width] == 255 ||
						Raw_Intensity[j - Width + 1] == 255 || Raw_Intensity[j + Width - 1] == 255 ||
						Raw_Intensity[j + Width] == 255 || Raw_Intensity[j + Width + 1] == 255)
					{
						dilation[j] = 255;
					}
					else
					{
						dilation[j] = 0;
					}

					/*for (int i = 1; i < (Height - 1); i++)
					{
					for (int x = (i * Width + 1); x < ((i + 1) * Width - 2); x++)
					{
					if (Raw_Intensity[j - 1] == 255 || Raw_Intensity[j + 1] == 255 ||
					Raw_Intensity[j - Width - 1] == 255 || Raw_Intensity[j - Width] == 255 ||
					Raw_Intensity[j - Width + 1] == 255 || Raw_Intensity[j + Width - 1] == 255 ||
					Raw_Intensity[j + Width] == 255 || Raw_Intensity[j + Width + 1] == 255)
					{
					dilation[j] = 255;
					}
					else
					{
					dilation[j] = 0;
					}
					}

					}*/

				}
				j++;
			}


			int d = 0;
			for (row = 0; row < Height; row++)
				for (column = 0; column < Width; column++) {
					Color n;
					n = Color::FromArgb(dilation[d], dilation[d], dilation[d]);
					d++;
					surface2->SetPixel(column, row, n);
				}
			// Erosion

			int *erosion = new int[Width*Height];


			this->pictureBox5->Location = System::Drawing::Point(pictureBox4->Left + pictureBox4->Height + 0, 27);
			Bitmap^ surface3 = gcnew Bitmap(pictureBox5->Width, pictureBox5->Height);
			pictureBox5->Image = surface3;

			int piksel = 0;
			while (piksel < (Width * Height))
			{
				if (//piksel == 0 || //Resmin ilk piksel de�eri i�in(0,0)
					0 <= piksel && piksel <= (Width - 1) || //Resmin ilk sat�r elemanlar� i�in
															//piksel == (Width - 1) || //Resmin Width inci eleman� i�in
					piksel % Width == 0 || //Resmin sol k��e pikselleri i�in
					(piksel + 1) % Width == 0 || //Resmin sa� k��e pikselleri i�in
					piksel == (Width * Height - Width) || // //Sol alt piksel de�eri i�in
					piksel == (Width * Height - 1) || //Sa� alt piksel de�eri i�in
					((Height * Width) - Width) < piksel && piksel < (Height * Width - 1))//Alt s�ra piksel de�erleri i�in
				{
					erosion[piksel] = 0;
				}
				else
				{
					// Ortada kalan piksel de�erleri i�in
					if (dilation[piksel - 1] == 255 &&
						dilation[piksel + 1] == 255 &&
						dilation[piksel - Width - 1] == 255 &&
						dilation[piksel - Width] == 255 &&
						dilation[piksel - Width + 1] == 255 &&
						dilation[piksel + Width - 1] == 255 &&
						dilation[piksel + Width] == 255 &&
						dilation[piksel + Width + 1] == 255)
					{
						erosion[piksel] = 255;
					}
					else
					{
						erosion[piksel] = 0;
					}

				}
				piksel++;
			}

			d = 0;
			for (row = 0; row < Height; row++)
				for (column = 0; column < Width; column++) {
					Color n;
					n = Color::FromArgb(erosion[d], erosion[d], erosion[d]);
					d++;
					surface3->SetPixel(column, row, n);
				}


			//Etiketleme
			int *newdizi = new int[Width*Height];

			//0 ve 1 binary sistemde bir �eyler ifade etti�i i�in ve benim foto�raf�mda 
			//binary oldu�u i�in etiketlemeyi 2 den ba�lat�yorum.
			int etiket = 2;

			int a = 0, x = 0, y = 0;

			//Raw_Intensity dizimdeki t�m de�erleri kontrol edece�im width*heigh ta kadar d�ng� d�n�yor.
			for (int i = 0; i < Width * Height; i++)
			{
				//Sadece piksel de�eri 255 olan de�erleri kontrol edece�im i�in bu ko�ulu koyuyorum. 
				if (erosion[i] == 255)
				{
					//e�er ilk indisimin kar��l��� 255 ise etraf�nda herhangi bir etiket bulunmad��� i�in ilk etiketimi verece�im
					if (i == 0)
					{
						newdizi[i] = etiket;
						etiket++;
					}
					//matrisimin ilk sat�r�ndaki de�erler i�in
					else if (i < Width)
					{
						a = newdizi[i - 1];
						//E�er bir �nceki elemanda etiket varsa onun etiketinin aynen kopyalayacak
						if (a > 1)
						{
							newdizi[i] = a;
						}
						//e�er yan�ndaki piksel etikete sahip de�ilse yeni etiket veriyor.
						else
						{
							newdizi[i] = etiket;
							etiket++;
						}

					}
					//Resmimin en sol pikselleri i�in
					else if ((i % Width) == 0)
					{
						a = newdizi[i - Width];
						//E�er bir �nceki elemanda etiket varsa onun etiketinin aynen kopyalayacak
						if (a > 1)
						{
							newdizi[i] = a;
						}
						//e�er yan�ndaki piksel etikete sahip de�ilse yeni etiket veriyor.
						else
						{
							newdizi[i] = etiket;
							etiket++;
						}
					}
					//E�er ne ilk sat�r nede ilk s�tun piksellerini etiketlemiyorsam buradan kontrol edicem
					else
					{
						//Sol ve �st kom�uluklar�n�n etiketlerini kontrol ediyorum.
						x = newdizi[i - 1];
						y = newdizi[i - Width];
						//E�er her ikisininde etiketi varsa herhangi birinin etiketini veriyorum di�erine
						if (x > 1 && y>1)
						{
							newdizi[i] = y;
						}
						//E�er sol kom�ulu�unun etiketi var ve �st komsulu�unun etiketi yok ise yeni piksel solun etiketini al�r.
						else if (x > 1 && y == 0)
						{
							newdizi[i] = x;
						}
						//E�er �st kom�ulu�unun etiketi var ve �st komsulu�unun etiketi yok ise yeni piksel solun etiketini al�r.
						else if (y > 1 && x == 0)
						{
							newdizi[i] = y;
						}
						//E�er her iki kom�ulu�ununda etiketi yok ise piksele yeni etiket de�eri veriyorum
						else
						{
							newdizi[i] = etiket;
							etiket++;
						}
					}

				}
				//Piksel de�eri 0 olanlar� o ile etiketliyor bir �nemi olmad���n� belirtiyorum.
				else
				{
					newdizi[i] = 0;
				}
			}
			//Ba�ta etiketi 2 den ba�latt���m i�in 2 ��kar�yorum burada da
			nesne = (etiket - 2);
			//**************************************
			//int r = 50, m=0;
			//for (int i = 2; i <= etiket; i++) 
			//{
			//	/*for (int a = 0; a < (Width*Height); a++) 
			//	{
			//		newdizi[a] == i;
			//		Color n;
			//		n = Color::FromArgb(newdizi[a], r,r);
			//		surface3->SetPixel(column, row, n);
			//	}
			//	r = r + 10;*/
			//	for (row = 0; row < Height; row++)
			//				for (column = 0; column < Width; column++) {
			//					Color n;
			//					n = Color::FromArgb(newdizi[m], r, r);
			//					//n = Color::FromArgb(Raw_Intensity[b], Raw_Intensity[b], Raw_Intensity[b]);
			//					m++;
			//					surface3->SetPixel(column, row, n);
			//				}
			//	r = r + 10;
			//}

			//-----------------------------------------------

			//Yeni Siyah Beyaz resmi ekranda g�ster.
			//int  m= 0, r=50;
			//if (newdizi[m] >= 2)
			//{
			//	for (row = 0; row < Height; row++)
			//		for (column = 0; column < Width; column++) {
			//			Color n;
			//			n = Color::FromArgb(erosion[m], r, r);
			//			//n = Color::FromArgb(Raw_Intensity[b], Raw_Intensity[b], Raw_Intensity[b]);
			//			m++;
			//			r = r + 50;
			//			surface3->SetPixel(column, row, n);
			//		}
			//	
			//}
			//else 
			//{
			//	for (row = 0; row < Height; row++)
			//		for (column = 0; column < Width; column++) {
			//			Color n;
			//			n = Color::FromArgb(erosion[m], erosion[m], erosion[m]);
			//			m++;
			//			surface3->SetPixel(column, row, n);
			//		}
			//}

			//-----------------------------------------
	

		}
		else MessageBox::Show("Dosya acilamad�");
	}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Raw_Intensity = ConvertBMPToIntensity(Buffer, Width, Height); Resmi yeni alsayd�k koyabilirdik ama �uan i�in gerek yok

		int dizi[256];
		for (int i = 0; i < 256; i++)
		{
			dizi[i] = 0; //Yeni olu�turdu�um atama yapaca��m dizimin t�m elemanlar�n� s�f�rl�yorum
		}

		int n;
		for (int j = 0; j < (Width*Height); j++)
		{
			/* pikselimin de�eri 0-255 aras� bir de�er olacak ve her pikselin de�eri
			yeni dizimin o indisinin de�erini bir artt�racak*/
			n = Raw_Intensity[j];
			dizi[n] = dizi[n] + 1;
		}

		this->chart1->Titles->Clear(); //Chartta varsay�lan olarak gelen ba�l�klar� temizliyoruz.
		this->chart1->Series->Clear(); //Chartta varsay�lan olarak gelen series(liste)leri temizliyoruz.
		this->chart1->Series->Add("Histogram Grafi�i"); //Histogram Ba�l��� 

		for (int i = 0; i < 256; i++)
		{
			this->chart1->Series[0]->Points->Add(dizi[i]);
		}

	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

		label1->Text = (nesne.ToString());
	}
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
