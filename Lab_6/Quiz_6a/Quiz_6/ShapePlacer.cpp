#include "ShapePlacer.h"

void ShapePlacer::AddNewShape(Shape * newShape)
{
	m_shapeList.push_back(newShape);
}


void ShapePlacer::VisualizeAllShapes()
{
	int i;
	for (int i = 0; i < m_shapeList.size(); i++) {
		cout <<"+---------------------+" << endl
			<< "+  SHAPE DESCRIPTION  +" << endl
			<< "+---------------------+" << endl;
		cout << m_shapeList[i]->GetShapeDiscription() << endl;
	}
}


Shape *ShapePlacer::FindTheMostProperShape(double area)
{
	Shape* result = nullptr;
	double prevAreaDiff = INFINITY;
	for (int i = 0; i < m_shapeList.size(); ++i) {

		double shapeArea = m_shapeList[i]->CalculateSurfaceArea();

		if (shapeArea > area) continue;

		double areaDiff = area - shapeArea;

		if (areaDiff < prevAreaDiff) {
			prevAreaDiff = areaDiff;
			result = m_shapeList[i];
		}
	}

	return result;
}