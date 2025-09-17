class FoodRatings {
public:
    unordered_map<string, string> foodsCuisine;
    unordered_map<string, int> foodsRating;
    unordered_map<string, set<pair<int, string>>> cuisinesRatingsFood;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();

        for(int i=0 ; i<n ; i++){
            foodsCuisine[foods[i]] = cuisines[i];
            foodsRating[foods[i]] = ratings[i];
            cuisinesRatingsFood[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = foodsCuisine[food];
        int oldRating = foodsRating[food];
        cuisinesRatingsFood[cuisine].erase({-oldRating, food});
        cuisinesRatingsFood[cuisine].insert({-newRating, food});
        foodsRating[food] = newRating;
    }
    
    string highestRated(string cuisine) {
        return cuisinesRatingsFood[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */