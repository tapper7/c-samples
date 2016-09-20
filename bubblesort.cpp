     cin >> myArray[c];
   //bubblesort
   for(c=0; c<n-1; c++)
      for(d=0; d<n-c-1; d++){
         if(myArray[d]>myArray[d+1]){//swap these two cells
            temp = myArray[d];
            myArray[d] = myArray[d+1];
            myArray[d+1] = temp;
         }//endif
       }//end inner-for
    //test
    cout << "sorted array ";
    for(c=0; c<n; c++)
       cout << myArray[c] << " ";

    cout << "\n selection problem, enter the Kth element needed \n";
    cin >> Kth;
    //wip add exception handling for bad request
    switch(Kth-1){
       case 0:  cout << "The first cell contains "  << myArray[0];
       break;
       case 1:  cout << "The second cell contains " << myArray[1];
       break;
       case 2:  cout << "The third cell contains "  << myArray[2];
       break;
       default: cout << "the " << Kth << "th" << " cell contains "  << myArray[Kth-1];
    }//end switch
    return 0;
}//end mn
