#include<iostream>
#include<vector>
using namespace std;

int proposals;
string proposalName, winner;
double proposalPrice, proposalRequirements, compliantPrice, partialCompliance, partialCompliancePrice,requirements, temp;
vector<string> results;
bool compliantFound;

int main(){			

	while( cin >> requirements >> proposals && requirements!=0 ){
		cin.ignore();
		compliantPrice = partialCompliance = partialCompliancePrice = -1;
		compliantFound = false;
		for(int i = 0; i < requirements; i++)
			cin.ignore(300, '\n');
		
		for(int i = 0; i < proposals; i++){
			getline(cin, proposalName);
			cin >> proposalPrice >> proposalRequirements;
			cin.ignore();
			for(int i = 0; i < proposalRequirements; i++) 
				cin.ignore(300, '\n');								
			temp = proposalRequirements/requirements;
			if(proposalRequirements == requirements && (proposalPrice < compliantPrice || compliantPrice==-1)   ){
				compliantPrice = proposalPrice;
				compliantFound = true;
				winner = proposalName;
			}
			else if( temp == partialCompliance && (proposalPrice < partialCompliancePrice || partialCompliancePrice==-1) && !compliantFound ){
				partialCompliancePrice = proposalPrice;
				partialCompliance = temp;
				winner = proposalName;
			}
			else if(temp > partialCompliance && !compliantFound){
				partialCompliance = temp;
				partialCompliancePrice = proposalPrice;
				winner = proposalName;
			}
			
		}
		results.push_back(winner);		
	}	
	
	for(int i = 0; i < results.size()-1; i++){		
		cout << "RFP #" << (i+1) << "\n" << results[i] << "\n\n";
	}
	cout << "RFP #" << (results.size()) << "\n" << results[results.size()-1] << "\n";
	
	return 0;
}
