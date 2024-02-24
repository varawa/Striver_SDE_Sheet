int dataTypes(string type) {
	// Write your code here
	if(type == "Long"){
		return 8 ;
	}
	if(type == "Integer"){
		return 4 ;
	}
	if(type == "Float"){
		return 4 ;
	}
	if(type == "Double"){
		return 8 ;
	}
	if(type == "Character"){
		return 1 ;
	}

	return 0 ;
}
