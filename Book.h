namespace ccrud {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Windows::Forms;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Book
	/// </summary>
	public ref class Book : public System::Windows::Forms::Form
	{
	public:
		Book(void)
		{
			InitializeComponent();
			LoadData();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Book()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ bookGdv;
	protected:



	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ autherCb;


	private: System::Windows::Forms::TextBox^ nameTxt;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ publisherTxt;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ searchBtn;

	private: System::Windows::Forms::TextBox^ searchTxt;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ AddBtn;
	private: System::Windows::Forms::Button^ ClearBtn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Book::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ClearBtn = (gcnew System::Windows::Forms::Button());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->searchTxt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->publisherTxt = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->autherCb = (gcnew System::Windows::Forms::ComboBox());
			this->nameTxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bookGdv = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bookGdv))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->ClearBtn);
			this->panel1->Controls->Add(this->AddBtn);
			this->panel1->Controls->Add(this->searchBtn);
			this->panel1->Controls->Add(this->searchTxt);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->publisherTxt);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->autherCb);
			this->panel1->Controls->Add(this->nameTxt);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->bookGdv);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(940, 556);
			this->panel1->TabIndex = 0;
			// 
			// ClearBtn
			// 
			this->ClearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearBtn->Location = System::Drawing::Point(669, 500);
			this->ClearBtn->Name = L"ClearBtn";
			this->ClearBtn->Size = System::Drawing::Size(106, 28);
			this->ClearBtn->TabIndex = 13;
			this->ClearBtn->Text = L"Clear";
			this->ClearBtn->UseVisualStyleBackColor = true;
			this->ClearBtn->Click += gcnew System::EventHandler(this, &Book::button3_Click);
			// 
			// AddBtn
			// 
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddBtn->Location = System::Drawing::Point(110, 500);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(106, 28);
			this->AddBtn->TabIndex = 12;
			this->AddBtn->Text = L"Add";
			this->AddBtn->UseVisualStyleBackColor = true;
			this->AddBtn->Click += gcnew System::EventHandler(this, &Book::AddBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchBtn.BackgroundImage")));
			this->searchBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->searchBtn->Location = System::Drawing::Point(883, 206);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(33, 30);
			this->searchBtn->TabIndex = 11;
			this->searchBtn->UseVisualStyleBackColor = true;
			// 
			// searchTxt
			// 
			this->searchTxt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTxt->Location = System::Drawing::Point(610, 205);
			this->searchTxt->Name = L"searchTxt";
			this->searchTxt->Size = System::Drawing::Size(267, 30);
			this->searchTxt->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(405, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Manage Books";
			// 
			// publisherTxt
			// 
			this->publisherTxt->AutoSize = true;
			this->publisherTxt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->publisherTxt->Location = System::Drawing::Point(41, 150);
			this->publisherTxt->Name = L"publisherTxt";
			this->publisherTxt->Size = System::Drawing::Size(85, 23);
			this->publisherTxt->TabIndex = 7;
			this->publisherTxt->Text = L"Publisher";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(476, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Author";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(175, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(278, 30);
			this->textBox2->TabIndex = 4;
			// 
			// autherCb
			// 
			this->autherCb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->autherCb->FormattingEnabled = true;
			this->autherCb->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nimrah Ahmed ", L"Ashfaq Ahmed", L"Allama Iqbal" });
			this->autherCb->Location = System::Drawing::Point(610, 92);
			this->autherCb->Name = L"autherCb";
			this->autherCb->Size = System::Drawing::Size(278, 31);
			this->autherCb->TabIndex = 3;
			// 
			// nameTxt
			// 
			this->nameTxt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTxt->Location = System::Drawing::Point(175, 95);
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(278, 30);
			this->nameTxt->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			// 
			// bookGdv
			// 
			this->bookGdv->AllowUserToOrderColumns = true;
			this->bookGdv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->bookGdv->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->bookGdv->Location = System::Drawing::Point(20, 242);
			this->bookGdv->Name = L"bookGdv";
			this->bookGdv->RowHeadersWidth = 51;
			this->bookGdv->RowTemplate->Height = 24;
			this->bookGdv->Size = System::Drawing::Size(908, 239);
			this->bookGdv->TabIndex = 0;
			// 
			// Book
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 556);
			this->Controls->Add(this->panel1);
			this->Name = L"Book";
			this->Text = L"Book";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bookGdv))->EndInit();
			this->ResumeLayout(false);

		}
		String^ connString = "Data Source=DESKTOP-8BL3MIG;Initial Catalog=lms;Integrated Security=True;Encrypt=False";

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Clear_Form();
}
private: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Add_book();
}
	   private: void LoadData() {
		
		   String^ query = "SELECT * FROM Books;";
		   SqlConnection^ connection = gcnew SqlConnection(connString);
		   SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, connection);
		   DataTable^ dataTable = gcnew DataTable();
		   adapter->Fill(dataTable);
		   bookGdv->DataSource = dataTable;
	   }
	
	private: bool IsNull() {
		if (String::IsNullOrEmpty(nameTxt->Text) || String::IsNullOrEmpty(autherCb->Text) || String::IsNullOrEmpty(publisherTxt->Text))
			return true;
		else
			return false;
	}
	private: void Clear_Form() {
		nameTxt->Clear();
		autherCb->SelectedIndex = -1;
		textBox2->Clear();
	}
	private: void Add_book() {
		String^ name = nameTxt->Text;
		String^ author = autherCb->Text;
		String^ publisher = publisherTxt->Text;

		if (IsNull()) {
			MessageBox::Show("Please fill all fields", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		try {

			String^ query = "INSERT INTO Books (Name, Author, Publisher) VALUES (@Name, @Author, @Publisher)";
			SqlConnection^ connection = gcnew SqlConnection(connString);
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@Name", name);
			command->Parameters->AddWithValue("@Author", author);
			command->Parameters->AddWithValue("@Publisher", publisher);

			connection->Open();
			command->ExecuteNonQuery();
			connection->Close();

			MessageBox::Show("Book added successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			LoadData();
			Clear_Form();
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
