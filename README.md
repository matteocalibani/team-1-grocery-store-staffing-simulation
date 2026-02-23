# team-1-grocery-store-staffing-simulation

Matteo Calibani
Seth Hansman
Rita Petros
Derek Robinson
Akash Sunilkumar

A grocery store wants a code developed through object-oriented programming which will take different variables or facts about the grocery stores' capabilities and see if new policies fit the needs of the store and customers.  







Assumptions/rules/thoughts before first meeting:
- Random time for each transaction is 0s-30s
- Cashiers will fill express 19- then express 9- then other lanes at start of day
- Cashiers will attempt to replace others if shifts align
- Customers will have under 50 items
- Customers will follow express rules unless other lanes are closed or there is no line for express?
- If Cashier shift has ended and there will be no replacement within "specified time", they will choose to service # customers 5 minutes before shift ends
- Customers will know if cashier intends to close lane and will change lanes
- When cashier lane opens customers from other lines will change lanes if current line is too long
- When cashier lane closes leftover customers split between other lanes and added to end of respective cues
- Cashiers take 2 minutes to switch (time not added to idle time)
- Debit can be used in express lanes
- Customers choose line based on #customers and #items (length=#customers*average#items)? as long as they follow other stated rules
  
- Program output customers
 * Average wait time
 * max wait time
 * wait time distribution
 * wait time distribution over day
- Program output cashiers
  * average cashier idling time
  * max cashier idling time
  * cashier idle distribution over day

  We need to update this to follow the instructions, otherwise good job team!
