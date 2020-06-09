# CS 100 Final Project
# ⚓️ Naval Power


Group member names and email:
- Orobosa Ogbeide 
- oogbe001@ucr.edu



Title of project
- Naval Power

What app do you plan to work on? 
- C++ Appliation 

Why is it important and interesting?
- The application will be important due to having an the ability to somewhat quantify the power of a modern military naval force. In addition to being able to look at specific data on each ship in their respective fleets.  

What language/tools/technology you plan to use?
- Language: C++
- Tools: XCode, Terminal, Visual Studio 

What will be the input/output of your project?
- The input will consist of predetermined values inside the interfact (USN_Ship and PLAN_Ship). The user will then be able to witness various information on fleets and chracteristics gathered by using various design patterns. 

# Naval Power Class Diagram 
- Description: Their is a client (main) that uses USN_Ship Class <Interface> as well as <PLAN_Ship Class>. This then allows access into using part of the factory method pattern in order to produce various ship's (products). In addition to the ship production their is also a two decorator's (USN_Decorator & PLAN_Decorator) that customize the various ships. Lastly their is a visistor class that visists each ship class and stamps it as "Active".  
![class-diagram](https://user-images.githubusercontent.com/41599814/84106088-0ecf1c00-a9cf-11ea-9d28-9e9c8b229d9d.png)

# Final Report 
- Welcome to Naval Power! ⚓️ This is an interactive project still in development. The basis of the project right now is simple to ask the user for an input shown here in the menu: 
<img width="562" alt="Screen Shot 2020-06-08 at 11 10 33 PM" src="https://user-images.githubusercontent.com/41599814/84112293-5066c380-a9dd-11ea-951d-f6e5cee51926.png">

- If you choose to check out the US Navy 7th Fleet🇺🇸 this would be the result: 
<img width="610" alt="Screen Shot 2020-06-09 at 12 32 27 PM" src="https://user-images.githubusercontent.com/41599814/84191469-61e7b400-aa4d-11ea-952e-0541fc83712f.png">

- If you choose to check out the Peoples Liberation Army Navy 5th Fleet🇨🇳 this would be the result: 
<img width="610" alt="Screen Shot 2020-06-09 at 12 32 47 PM" src="https://user-images.githubusercontent.com/41599814/84191523-7461ed80-aa4d-11ea-9e6b-1679a4dc77fc.png">




- Overall the application does encorporate various design patterns, although their are still a view features that I would like to include such as allowing the user to utilize a PowerBudget and construct their own fleet where they can name their own ships, build their own fleets, etc. 


# ⚙️Naval Power Updates
## Update v1.0
- Update v1.01: Construct the base USN_Ship and PLAN_Ship classes and their subclasses. This update will consist of just using the factory method to produce those various ships. 
- Update v1.02: Include a decorator in order to pre-customize the various ships based on the base class methods. (Homeport, PowerIndex, etc) NOTE: Personal customization won't be available until v2.0 is released. 
- Update v1.03: Final version 1.0 update that saw the addition of the visitor class so that each ship in their respective fleets were stated as "active". In the future the visitor class will allow user customization to state whether a ship is "Active" or "Reserve" in a fleet.


## Update v2.0
- Update v2.01: Will redesign the entire program to allow user customization instead of a predetermined set of values. 

