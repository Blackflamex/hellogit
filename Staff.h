include"string"
class staff
{ 
	private:
			std::string name
			int yearsworked
	
	public:
			staff()
			{
				name="default"
				yearsworked=0;
			}
			
		void setName (std:: string staffName)
		{
			name=staffName;
		}
		void setYearsworked (int years)
		{
			yearsworked=years;
		}
		string getname()
		{
			return name;
		}
		int getYearsworked
		{
			return yearsworked;
		}
		void Display()
		{
			cout<<"Name:"<<name;
			cout<<"Number of years worked:"<<yearsworked;
		}
		
