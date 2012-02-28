virtual GOPos Position()
{
	
}


void Obstacles:: SetNewPosition(Obstacle ob, Point currentScreenCenter, Point previousScreenCenter)
{
	int Xmoved, Ymoved;

	if((Xmoved = currentScreenCenter.x - previousScreenCenter.x) != 0)
                 ob.position.x = ob.positon.x + Xmoved;

        if((Ymoved = currentScreenCenter.y - previousScreenCenter.y) != 0)
                 ob.position.y = ob.positon.y + Ymoved;
	
} 
